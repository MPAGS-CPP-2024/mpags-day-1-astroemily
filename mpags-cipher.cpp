#include <iostream>
#include <string>
#include <cstring>
#include <vector>

int main(int argc, char* argv[]){

    // command line argument work
    const std::vector<std::string> cmdLineArgs = {argv, argv+argc } ;

    std::cout << cmdLineArgs.size() << std::endl ;

    for (size_t i{0} ; i <cmdLineArgs.size() ; i++)
    {
        std::cout << "Index: " << i << " is " << cmdLineArgs[i] << std::endl ;
        
        // help message
        if (cmdLineArgs[i]=="-h")
        {
            std::cout << "This is a help message" << std::endl ;
        }
        //help message
        if (cmdLineArgs[i]=="--help")
        {
            std::cout << "This is a help message" << std::endl ;
        }
        // version data
        if (cmdLineArgs[i]=="--version")
        {
            std::cout << "This code is version " << std::endl ;
        }
        //input file
        if (cmdLineArgs[i]=="-i")
        {
            std::string input_file{cmdLineArgs[i+1]} ;
            std::cout << "Input file detected as " << input_file << std::endl ;
        }
        //output file
        if (cmdLineArgs[i]=="-o")
        {
            std::string output_file{cmdLineArgs[i+1]} ;
            std::cout << "Output file detected as " << output_file << std::endl ;
        }
    }

    char in_char{'e'}; //initialised in char character
    std::string out_str{""}; //this stores the output

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
        // only print alphabetic characters
        // and convert to upper case
        if (std::isalpha(in_char) )
        {
            //append out_str with each upper case letter
            out_str += std::toupper(in_char) ;
            continue ;

        }
        //    - Change numbers to words
        switch (in_char)
        {
            case '1':
                out_str+= "ONE" ;
                break ;
            
            case '2':
                out_str+= "TWO" ;
                break ;

            case '3':
                out_str+= "THREE" ;
                break ;
            
            case '4':
                out_str+= "FOUR " ;
                break ;

            case '5':
                out_str+= "FIVE" ;
                break ;

            case '6':
                out_str+= "SIX" ;
                break ;

            case '7':
                out_str+= "SEVEN" ;
                break ;

            case '8':
                out_str+= "EIGHT" ;
                break ;

            case '9':
                out_str+= "NINE" ;
                break ;

            case '0':
                out_str+= "ZERO" ;
                break ;
        }
        //    - Ignore any other (non-alpha) characters
        // which is done by default because we haven't done anything to account for them
        
    }
  // print out the new string
  std::cout << out_str <<std::endl ;
}
