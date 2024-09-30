#include <iostream>
#include <string>   // for answer
#include <thread>   // for std::this_thread::sleep_for
#include <chrono>   // for std::chrono::seconds



int main(){


    char mouse_pic[13][35] = {
    "     .--,       .--,         ",
    "    ( (  \\.---./  ) )        ",
    "     '.__/o   o\\__.'         ",
    "        {=  ^  =}            ",
    "         >  -  <             ",
    "        /       \\            ",
    "       //       \\\\           ",
    "      //|   .   |\\\\          ",
    "      \"'\\       /'\"_.-~^`'-. ",
    "         \\  _  /--'         `",
    "       ___)( )(___           ",
    "      (((__) (__)))          ",
    };

char mean_mouse[16][35] = {
    "      __       __     _    ",
    "     /-\\.     /  \\   //  ", 
    "     \\  \\|_,_/|  /  (( ",
    "      `\\ `    `\"    \\\\    ",
    "      /  _   _  \\     ))   ",
    "     |  (0\\ /0)  |   //    ",
    "     \\           /  //     ",
    "     /`.== 0 ==.`\\ ((      ",
    "    /   `~~W~~`   \\ \\\\     ",
    "   |   ,       ,   | ))    ",
    "   \\   \\       /   ///     ",
    "   /`vvvv     vvvv`\\/      ",
    "  |                 |      ",
    "  |   |         |   |      ",
    " /    (         )    \\     ",
    "(v(v(v)`=.....=`(v)v)v)    ",
};



    for(int i = 0; i < 13; i++){
        std::cout << mouse_pic[i] << '\n';
    }

    std::this_thread::sleep_for(std::chrono::seconds(4));

    std::cout << "give me cheese." << '\n';

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Your answer?: ";

    std::string answer;
    std::getline(std::cin, answer);

    if(answer == "yes" || answer == "Yes" || answer == "YES" || answer == "yES" || answer == "YEs" || answer == "YeS" || answer == "yEs" || answer == "yeS"){
        std::cout << "You are spared...";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "for now." << '\n';
    }
    else{
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "..?" << '\n';
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "..." << '\n';
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::seconds(4));
        std::cout << "so you choose death." << '\n';
        std::cout.flush();

        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << '\n' << '\n' << " FEAR ME FOR I AM COMING! ";
    }

    std::this_thread::sleep_for(std::chrono::seconds(2));

    for(int i = 0; i < 16; i++){
        std::cout << mean_mouse[i] << '\n';
    }

    std::cout.flush();
    std::cout << '\n' << "byebye HAHAHA";


    return 0;

}