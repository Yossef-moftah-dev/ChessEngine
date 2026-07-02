#include <iostream>

#include "ChessEngine.h"
#include "uci.h"

void Run(int argc, char** argv)
{
    std::cout<<"Chess Engine by Yossef\n";
    std::cout<<"Type \"help\" for more info\n";
    if(argc > 1)
    {
        std::string param1 = argv[1];
        if(param1 == "bench")
        {
            return;
        }

        if(param1 == "datagen")
        {
            return;
        }
    }

    auto uci = UciStd();
    uci.Run();
}

void Test()
{

}

int main(){
    setbuf(stdout, 0);
    Run(argc, argv);
    
    return 0;
}