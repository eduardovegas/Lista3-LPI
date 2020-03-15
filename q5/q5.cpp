#include <iostream>
#include <fstream>
#include <vector>

void lerArquivo(std::vector<std::string> &Data){

    std::ifstream file;
    int tam = 0;
    std::string text;

    file.open("Teste.txt");
    if (!file.is_open()) {
        std::cout << "Nao foi possivel abrir o arquivo para leitura" << std::endl;
        return;
    }

    //file.seekg(0, std::ios::end);
    //tam = file.tellg();
    //file.seekg(0, std::ios::beg);
    //std::cout << "Tamanho do arquivo de leitura: " << tam << std::endl;

    while(1){
    
        std::getline(file, text);
        Data.push_back(text);

        if (file.eof() || file.bad() || file.fail())
            break;

    }

    file.close();

    return;

}

void escreverArquivo(std::vector<std::string> &Data){

    std::ofstream file;
    int tam = 0;

    file.open("CopiaDeTeste.txt");
    if (!file.is_open()) {
        std::cout << "Nao foi possivel abrir o arquivo para escrita" << std::endl;
        return;
    }


    for(int i = 0; i < Data.size(); i++){
    
        file << Data[i] << std::endl;

    }

    //file.seekp(0, std::ios::end);
    //tam = file.tellp();
    //file.seekp(0, std::ios::beg);
    //std::cout << "Tamanho do arquivo de escrita: " << tam << std::endl;

    file.close();

    return;

}

int main(){

    std::vector<std::string> Dados;

    lerArquivo(Dados);

    escreverArquivo(Dados);

    return 0;

}