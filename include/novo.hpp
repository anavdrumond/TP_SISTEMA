#include <string>
#include <vector>
#include <map>

class Intruso{
    std::vector<std::vector<std::string>> recorrencia;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
}