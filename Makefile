CC := g++
BUILDDIR := build
SRCDIR := src
FLAGS := -I include/

all: main
	
livro:
	$(CC) $(FLAGS) -c $(SRCDIR)/livro.cpp -o $(BUILDDIR)/livro.o

endereco: 
	$(CC) $(FLAGS) -c $(SRCDIR)/endereco.cpp -o $(BUILDDIR)/endereco.o

postagem: livro
	$(CC) $(FLAGS) -c $(SRCDIR)/postagem.cpp -o $(BUILDDIR)/postagem.o

rede: 
	$(CC) $(FLAGS) -c $(SRCDIR)/rede.cpp -o $(BUILDDIR)/rede.o

usuario: endereco
	$(CC) $(FLAGS) -c $(SRCDIR)/usuario.cpp -o $(BUILDDIR)/usuario.o
	
transacao:postagem
	$(CC) $(FLAGS) -c $(SRCDIR)/transacao.cpp -o $(BUILDDIR)/transacao.o

troca:transacao
	$(CC) $(FLAGS) -c $(SRCDIR)/troca.cpp -o $(BUILDDIR)/troca.o

venda: transacao postagem
	$(CC) $(FLAGS) -c $(SRCDIR)/venda.cpp -o $(BUILDDIR)/venda.o

main: endereco livro postagem rede troca usuario venda
	$(CC) $(FLAGS) $(BUILDDIR)/*.o  $(SRCDIR)/main.cpp -o $(BUILDDIR)/main
	@chmod a+x $(BUILDDIR)/main

clean:
	rm -r $(BUILDDIR)/*