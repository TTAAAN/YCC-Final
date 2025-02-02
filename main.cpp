#include <iostream>
#include <string>
#include <thread>  // for std::this_thread::sleep_for
// Includes the thread library, which allows working with threads.
// Provides std::this_thread::sleep_for, which pauses execution for a specified duration.
// #include <chrono>

#include <chrono>  // for chrono::second

// Includes the chrono library, which provides time-related utilities.
// Defines time units like std::chrono::seconds, std::chrono::milliseconds, etc.

using namespace std;


void captainSpeakingMessage(){
    string art = R"(
__| |______________________________________________________________________________________________________________________________________________________________________________________________________________| |__
__   ______________________________________________________________________________________________________________________________________________________________________________________________________________   __
  | |                                                                                                                                                                                                              | |  
  | |    _                _ _                               _                           _                                                                                                                          | |  
  | |   | |              | (_)                             | |                     _   | |                                                                                                                         | |  
  | |   | |      ____  _ | |_  ____  ___     ____ ____   _ | |    ____  ____ ____ | |_ | | ____ ____   ____ ____                                                                                                   | |  
  | |   | |     / _  |/ || | |/ _  )/___)   / _  |  _ \ / || |   / _  |/ _  )  _ \|  _)| |/ _  )    \ / _  )  _ \                                                                                                  | |  
  | |   | |____( ( | ( (_| | ( (/ /|___ |  ( ( | | | | ( (_| |  ( ( | ( (/ /| | | | |__| ( (/ /| | | ( (/ /| | | |_                                                                                                | |  
  | |   |_______)_||_|\____|_|\____|___/    \_||_|_| |_|\____|   \_|| |\____)_| |_|\___)_|\____)_|_|_|\____)_| |_( )                                                                                               | |  
  | |                                                           (_____|                                          |/                                                                                                | |  
  | |    _  _  _                _ _ _    _              _                 _ _                                                                                                                                      | |  
  | |   | || || |              (_) | |  | |            | |               | (_)                                                                                                                                     | |  
  | |   | || || | ____    _ _ _ _| | |  | | _   ____   | | ____ ____   _ | |_ ____   ____     ___  ___   ___  ____                                                                                                 | |  
  | |   | ||_|| |/ _  )  | | | | | | |  | || \ / _  )  | |/ _  |  _ \ / || | |  _ \ / _  |   /___)/ _ \ / _ \|  _ \                                                                                                | |  
  | |   | |___| ( (/ /   | | | | | | |  | |_) | (/ /   | ( ( | | | | ( (_| | | | | ( ( | |  |___ | |_| | |_| | | | |_                                                                                              | |  
  | |    \______|\____)   \____|_|_|_|  |____/ \____)  |_|\_||_|_| |_|\____|_|_| |_|\_|| |  (___/ \___/ \___/|_| |_(_)                                                                                             | |  
  | |                                                                              (_____|                                                                                                                         | |  
  | |    ______  _                                                                                                                                                                                                 | |  
  | |   (_____ \| |                                    _                        _                                                       _                                                                          | |  
  | |    _____) ) | ____ ____  ___  ____     ____ ____| |_ _   _  ____ ____    | |_  ___     _   _  ___  _   _  ____     ___  ____ ____| |_   ___                                                                  | |  
  | |   |  ____/| |/ _  ) _  |/___)/ _  )   / ___) _  )  _) | | |/ ___)  _ \   |  _)/ _ \   | | | |/ _ \| | | |/ ___)   /___)/ _  ) _  |  _) /___)                                                                 | |  
  | |   | |     | ( (/ ( ( | |___ ( (/ /   | |  ( (/ /| |_| |_| | |   | | | |  | |_| |_| |  | |_| | |_| | |_| | |      |___ ( (/ ( ( | | |__|___ |                                                                 | |  
  | |   |_|     |_|\____)_||_(___/ \____)  |_|   \____)\___)____|_|   |_| |_|   \___)___/    \__  |\___/ \____|_|      (___/ \____)_||_|\___|___( )                                                                | |  
  | |                                                                                       (____/                                              |/                                                                 | |  
  | |                     _        _           _          ___                                             ___                                                                              _           _           | |  
  | |      /\            | |      | |         ( )_       / __)                      _       _            / __)          _                                                             _   | |         | |_         | |  
  | |     /  \  ____   _ | |    _ | | ___  ___|/| |_    | |__ ___   ____ ____  ____| |_    | |_  ___    | |__ ____  ___| |_  ____ ____     _   _  ___  _   _  ____     ___  ____ ____| |_ | | _   ____| | |_       | |  
  | |    / /\ \|  _ \ / || |   / || |/ _ \|  _ \|  _)   |  __) _ \ / ___) _  |/ _  )  _)   |  _)/ _ \   |  __) _  |/___)  _)/ _  )  _ \   | | | |/ _ \| | | |/ ___)   /___)/ _  ) _  |  _)| || \ / _  ) |  _)      | |  
  | |   | |__| | | | ( (_| |  ( (_| | |_| | | | | |__   | | | |_| | |  ( ( | ( (/ /| |__   | |_| |_| |  | | ( ( | |___ | |_( (/ /| | | |  | |_| | |_| | |_| | |      |___ ( (/ ( ( | | |__| |_) | (/ /| | |__ _    | |  
  | |   |______|_| |_|\____|   \____|\___/|_| |_|\___)  |_|  \___/|_|   \_|| |\____)\___)   \___)___/   |_|  \_||_(___/ \___)____)_| |_|   \__  |\___/ \____|_|      (___/ \____)_||_|\___)____/ \____)_|\___|_)   | |  
  | |                                                                  (_____|                                                            (____/                                                                   | |  
__| |______________________________________________________________________________________________________________________________________________________________________________________________________________| |__
__   ______________________________________________________________________________________________________________________________________________________________________________________________________________   __
  | |                                                                                                                                                                                                              | |  
    )";
    cout << art;
}

void planeLanding(){
string plane[] = {
    "                                                                                                                                                                                                                                  ___                      ",
    "                                                                                                                                                                                                                                 /  //                      ",
    "                                                                                                                                                                                                                                /`  //                       ",
    "                                                                                                                                                                                                                               /   //                   ___    ",
    "                                                                                                                                                                                                                              /`   //                 /    |   ",
    "                                                                                                                                                                                                                             /     /                 /_____|   ",
    "                                                                                                                                                                                                                            /`    /                 /______|   ",
    "                                                                                                                                                                                                                           /     /                 /       |   ",
    "                                                                                                                                                                                                            ._.---------------------------------__/__      |   ",
    "                                                                                                                                                                                                       __//[][_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o__~~~----|__ ",
    "                                                                                                                                                                                                    __|                )      ~/                         ___|",
    "                                                                                                                                                                                                       \\_________________/,      /_______________...---~~~    ",
    "                                                                                                                                                                                                                          \\     \\                           ",
    "                                                                                                                                                                                                                           \\,    \\                          ",
    "                                                                                                                                                                                                                            \\     \\                         ",
    "                                                                                                                                                                                                                             \\,    \\                        ",
    "                                                                                                                                                                                                                              \\     \\                       ",
    "                                                                                                                                                                                                                               \\,   \\\\                      ",
    "                                                                                                                                                                                                                                \\   \\\\                     ",
    "                                                                                                                                                                                                                                 \\,  \\\\                    ",
    "                                                                                                                                                                                                                                  \\_//                   "
    };
    int millisecond = 20;
    for (int i = 0; i < 190; i++){
        this_thread::sleep_for(chrono::milliseconds(millisecond)); // sets the maximum number of characters to ignore.
        system("clear");
        for (int j = 0; j < sizeof(plane)/sizeof(plane[0]); j++){
            plane[j].erase(0,1); // string.erase(position, length);
        }

        for (int i = 0; i < sizeof(plane)/sizeof(plane[0]); i++){
            cout << plane[i] << endl;
        }

        millisecond = (0.075 * i + 1) * (0.075 * i + 1);  // (i+1)^2 * 10    }


    }
}

void artWelcome(){
    std::string art1 = R"(
╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║  __        __   _                            _         __   ______ ____         _      _ _            _   ║
║  \ \      / /__| | ___ ___  _ __ ___   ___  | |_ ___   \ \ / / ___/ ___|   __ _(_)_ __| (_)_ __   ___| |  ║
║   \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \   \ V / |  | |      / _` | | '__| | | '_ \ / _ \ |  ║
║    \ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) |   | || |__| |___  | (_| | | |  | | | | | |  __/_|  ║
║     \_/\_/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/    |_| \____\____|  \__,_|_|_|  |_|_|_| |_|\___(_)  ║
║                                                                                                           ║
╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                
)";
    cout << art1; 
}

void art5second(){
    std::string art1 = R"(
╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                  _                    _                             _         ____                                 _         ║
║  |_   _| |__   ___   _ __ | | __ _ _ __   ___  | | ___  __ ___   _____  ___  (_)_ __   | ___|   ___  ___  ___ ___  _ __   __| |___     ║
║    | | | '_ \ / _ \ | '_ \| |/ _` | '_ \ / _ \ | |/ _ \/ _` \ \ / / _ \/ __| | | '_ \  |___ \  / __|/ _ \/ __/ _ \| '_ \ / _` / __|    ║
║    | | | | | |  __/ | |_) | | (_| | | | |  __/ | |  __/ (_| |\ V /  __/\__ \ | | | | |  ___) | \__ \  __/ (_| (_) | | | | (_| \__ \_   ║
║    |_| |_| |_|\___| | .__/|_|\__,_|_| |_|\___| |_|\___|\__,_| \_/ \___||___/ |_|_| |_| |____/  |___/\___|\___\___/|_| |_|\__,_|___(_)  ║
║                     |_|                                                                                                                ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                             
)";
    cout << art1;
}

void art4second(){
    std::string art1 = R"(
╔═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                  _                    _                             _         _  _                                  _         ║
║  |_   _| |__   ___   _ __ | | __ _ _ __   ___  | | ___  __ ___   _____  ___  (_)_ __   | || |    ___  ___  ___ ___  _ __   __| |___     ║
║    | | | '_ \ / _ \ | '_ \| |/ _` | '_ \ / _ \ | |/ _ \/ _` \ \ / / _ \/ __| | | '_ \  | || |_  / __|/ _ \/ __/ _ \| '_ \ / _` / __|    ║
║    | | | | | |  __/ | |_) | | (_| | | | |  __/ | |  __/ (_| |\ V /  __/\__ \ | | | | | |__   _| \__ \  __/ (_| (_) | | | | (_| \__ \_   ║
║    |_| |_| |_|\___| | .__/|_|\__,_|_| |_|\___| |_|\___|\__,_| \_/ \___||___/ |_|_| |_|    |_|   |___/\___|\___\___/|_| |_|\__,_|___(_)  ║
║                     |_|                                                                                                                 ║
╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                            
)";

    cout << art1;

}

void art3second(){
    std::string art1 = R"(
╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                  _                    _                             _         _____                                _         ║
║  |_   _| |__   ___   _ __ | | __ _ _ __   ___  | | ___  __ ___   _____  ___  (_)_ __   |___ /   ___  ___  ___ ___  _ __   __| |___     ║
║    | | | '_ \ / _ \ | '_ \| |/ _` | '_ \ / _ \ | |/ _ \/ _` \ \ / / _ \/ __| | | '_ \    |_ \  / __|/ _ \/ __/ _ \| '_ \ / _` / __|    ║
║    | | | | | |  __/ | |_) | | (_| | | | |  __/ | |  __/ (_| |\ V /  __/\__ \ | | | | |  ___) | \__ \  __/ (_| (_) | | | | (_| \__ \_   ║
║    |_| |_| |_|\___| | .__/|_|\__,_|_| |_|\___| |_|\___|\__,_| \_/ \___||___/ |_|_| |_| |____/  |___/\___|\___\___/|_| |_|\__,_|___(_)  ║
║                     |_|                                                                                                                ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                      
)";
    cout << art1;

}

void art2second(){
    std::string art1 = R"(
╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                  _                    _                             _         ____                                 _         ║
║  |_   _| |__   ___   _ __ | | __ _ _ __   ___  | | ___  __ ___   _____  ___  (_)_ __   |___ \   ___  ___  ___ ___  _ __   __| |___     ║
║    | | | '_ \ / _ \ | '_ \| |/ _` | '_ \ / _ \ | |/ _ \/ _` \ \ / / _ \/ __| | | '_ \    __) | / __|/ _ \/ __/ _ \| '_ \ / _` / __|    ║
║    | | | | | |  __/ | |_) | | (_| | | | |  __/ | |  __/ (_| |\ V /  __/\__ \ | | | | |  / __/  \__ \  __/ (_| (_) | | | | (_| \__ \_   ║
║    |_| |_| |_|\___| | .__/|_|\__,_|_| |_|\___| |_|\___|\__,_| \_/ \___||___/ |_|_| |_| |_____| |___/\___|\___\___/|_| |_|\__,_|___(_)  ║
║                     |_|                                                                                                                ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                           
)";
    cout << art1;

}

void art1second(){
    std::string art1 = R"(
╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                  _                    _                             _         _                                _     ║
║  |_   _| |__   ___   _ __ | | __ _ _ __   ___  | | ___  __ ___   _____  ___  (_)_ __   / |  ___  ___  ___ ___  _ __   __| |    ║
║    | | | '_ \ / _ \ | '_ \| |/ _` | '_ \ / _ \ | |/ _ \/ _` \ \ / / _ \/ __| | | '_ \  | | / __|/ _ \/ __/ _ \| '_ \ / _` |    ║
║    | | | | | |  __/ | |_) | | (_| | | | |  __/ | |  __/ (_| |\ V /  __/\__ \ | | | | | | | \__ \  __/ (_| (_) | | | | (_| |_   ║
║    |_| |_| |_|\___| | .__/|_|\__,_|_| |_|\___| |_|\___|\__,_| \_/ \___||___/ |_|_| |_| |_| |___/\___|\___\___/|_| |_|\__,_(_)  ║
║                     |_|                                                                                                        ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝               
)";
    cout << art1;

}

void artPlaneDeparted(){
    std::string art1 = R"(
╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║   ____  _                    _                     _                       _           _ _   ║
║  |  _ \| | __ _ _ __   ___  | |__   __ _ ___    __| | ___ _ __   __ _ _ __| |_ ___  __| | |  ║
║  | |_) | |/ _` | '_ \ / _ \ | '_ \ / _` / __|  / _` |/ _ \ '_ \ / _` | '__| __/ _ \/ _` | |  ║
║  |  __/| | (_| | | | |  __/ | | | | (_| \__ \ | (_| |  __/ |_) | (_| | |  | ||  __/ (_| |_|  ║
║  |_|   |_|\__,_|_| |_|\___| |_| |_|\__,_|___/  \__,_|\___| .__/ \__,_|_|   \__\___|\__,_(_)  ║
║                                                          |_|                                 ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝             
)";
    cout << art1;

}

void artThankYou(){
    std::string art1 = R"(
╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
║   _____ _                 _                           __                   _                     _                         _   ║
║  |_   _| |__   __ _ _ __ | | __  _   _  ___  _   _   / _| ___  _ __    ___| |__   ___   ___  ___(_)_ __   __ _   _   _ ___| |  ║
║    | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | | | |_ / _ \| '__|  / __| '_ \ / _ \ / _ \/ __| | '_ \ / _` | | | | / __| |  ║
║    | | | | | | (_| | | | |   <  | |_| | (_) | |_| | |  _| (_) | |    | (__| | | | (_) | (_) \__ \ | | | | (_| | | |_| \__ \_|  ║
║    |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_| |_|  \___/|_|     \___|_| |_|\___/ \___/|___/_|_| |_|\__, |  \__,_|___(_)  ║
║                                  |___/                                                                   |___/                 ║
╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝                                              
)";
    cout << art1;

}

void artFlightLeaveSoon(){
    std::string art1 = R"(
 _____                                                                                                                                  _____ 
( ___ )                                                                                                                                ( ___ )
 |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   | 
 |   |                                                                                                                                  |   | 
 |   |                                                                                                                                  |   | 
 |   |           _____ _             __ _ _       _     _              _ _ _   _                                                        |   | 
 |   |          /__   \ |__   ___   / _| (_) __ _| |__ | |_  __      _(_) | | | | ___  __ ___   _____   ___  ___   ___  _ __            |   | 
 |   |            / /\/ '_ \ / _ \ | |_| | |/ _` | '_ \| __| \ \ /\ / / | | | | |/ _ \/ _` \ \ / / _ \ / __|/ _ \ / _ \| '_ \           |   | 
 |   |           / /  | | | |  __/ |  _| | | (_| | | | | |_   \ V  V /| | | | | |  __/ (_| |\ V /  __/ \__ \ (_) | (_) | | | |          |   | 
 |   |           \/   |_| |_|\___| |_| |_|_|\__, |_| |_|\__|   \_/\_/ |_|_|_| |_|\___|\__,_| \_/ \___| |___/\___/ \___/|_| |_|          |   | 
 |   |                                      |___/                                                                                       |   | 
 |   |    ___ _                        __       _ _                 _   _            _           _                   _   _              |   | 
 |   |   / _ \ | ___  __ _ ___  ___   / _| ___ | | | _____      __ | |_| |__   ___  (_)_ __  ___| |_ _ __ _   _  ___| |_(_) ___  _ __   |   | 
 |   |  / /_)/ |/ _ \/ _` / __|/ _ \ | |_ / _ \| | |/ _ \ \ /\ / / | __| '_ \ / _ \ | | '_ \/ __| __| '__| | | |/ __| __| |/ _ \| '_ \  |   | 
 |   | / ___/| |  __/ (_| \__ \  __/ |  _| (_) | | | (_) \ V  V /  | |_| | | |  __/ | | | | \__ \ |_| |  | |_| | (__| |_| | (_) | | | | |   | 
 |   | \/    |_|\___|\__,_|___/\___| |_|  \___/|_|_|\___/ \_/\_/    \__|_| |_|\___| |_|_| |_|___/\__|_|   \__,_|\___|\__|_|\___/|_| |_| |   | 
 |   |                                                                                                                                  |   | 
 |   |                                                                                                                                  |   | 
 |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___| 
(_____)                                                                                                                                (_____)
    )";
    cout << art1;

}

void FoodMenu() {
    cout << "~~~~ Food Menu ~~~~" << endl;
    cout << "1. Vegetarian Salad - $7.00" << endl;
    cout << "2. Non-Vegetarian Beef Burger - $9.99" << endl;
    cout << "3. Back to Main Menu" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\n";
    cout << "Please select your option (1-3): ";
}

void BeveragesMenu() {
    cout << "~~~~ Beverages Menu ~~~~" << endl;
    cout << "1. Coffee - $4.99" << endl;
    cout << "2. Hot Green Tea - $1.50" << endl;
    cout << "3. Coca cola - $5.79" << endl;
    cout << "4. 500ml Water - $4.99" << endl;
    cout << "5. Back to Main Menu" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\n";
    cout << "Please select your option (1-5): ";
}

void SnacksMenu() {
    cout << "~~~~ Unhealthy Snacks Menu ~~~~" << endl;
    cout << "1. Cheetos Puffs Cheese Flavored - $3.50" << endl;
    cout << "2. Oreo - $1.50" << endl;
    cout << "3. Doritos Spicy Sweet Chili - $2.00" << endl;
    cout << "4. Lay's Roasted Chicken - $4.99" << endl;
    cout << "5. Back to Main Menu" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\n";
    cout << "Please select your option (1-5): ";
}

void DisplayBill(const string items[], const double prices[], int itemCount) {
    cout << "~~~~ Check Out ~~~~" << endl; //
    cout << "-------------------" << endl;

    double total = 0.0; // no item add yet
    for (int i = 0; i < itemCount; ++i) {
        cout << items[i] << " $" << prices[i] << endl;
        total += prices[i];
    }

    cout << "-------------------\n" << endl;
    cout << "Total: $" << total << endl;
    cout << "Thank you for using the in-flight menu. Enjoy and have a great flight!" << endl;
}

void DisplayOrderSummary(const string items[], const double prices[], int itemCount) {
    cout << "\n~~~~ Order Summary ~~~~" << endl; //
    for (int i = 0; i < itemCount; ++i) {
        cout << items[i] << ": $" << prices[i] << endl;
    }
}

void MainMenu() {
    cout << "*** Please pre-order your in-flight meals ***" << endl;
    cout << "~~~~ In-Flight Menu ~~~~" << endl;
    cout << "1. Food" << endl;
    cout << "2. Beverages" << endl;
    cout << "3. Snacks" << endl;
    cout << "4. Check out" << endl;
    cout << "5. Exit" << endl;

}

void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #elif __APPLE__
        system("clear");
    #elif __linux__
        system("clear");
    #else
        std::cout << "Unknown Operating System" << std::endl;
    #endif
}

void cout_departure() {
    string plane_art[] = {
        "                      ___",
        "                      \\\\ \\",
        "                       \\\\ `\\",
        "    ___                 \\\\  \\",
        "   |    \\                \\\\  `\\",
        "   |_____\\                \\    \\",
        "   |______\\                \\    `\\",
        "   |       \\                \\     \\",
        "   |      __\\__---------------------------------._.",
        " __|---~~~__o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_o_[][\\__",
        "|___                         /~      )                \\__",
        "    ~~~---..._______________/      ,/_________________/",
        "                           /      /",
        "                          /     ,/",
        "                         /     /",
        "                        /    ,/",
        "                       /    /",
        "                      //  ,/",
        "                     //  /",
        "                    // ,/",
        "                   //_/",
    };
    
    int millisecond = 240;
    int plane_art_length = sizeof(plane_art) / sizeof(plane_art[0]);
    
    for (int i = 0; i < 180; i++) {
        for (int j = 0; j < plane_art_length; j++) {
            plane_art[j].insert(0, 1, ' '); // string.insert(position, num, char);
        }

        for (int j = 0; j < plane_art_length; j++) {
            cout << plane_art[j] << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(millisecond));
        if (i % 2 == 0 && millisecond > 10) {
            millisecond -= 13;
        }
        clearScreen();

    }
}

void ycc_flight(){
    artWelcome();
    cout << "\n\n";
    cout << "Please select your destination." << endl; 
    cout << "===================== FLYING TO ========================" << endl;
    cout << "1. Paris, France " << endl;
    cout << "2. Tokyo, Japan" << endl;
    cout << "3. Phnom Penh, Cambodia" << endl;
    cout << "4. Beijing, China" << endl;
    cout << "5. Hanoi, Vietnam" << endl;
    cout << "========================================================" << endl;
    cout << "Please select destination number (1-5): "; 
}

void flight_message(string flightDestination){
    cout << "--------------------------------------------------------------" << endl;
    cout << "Welcome on Board! We're heading to " << flightDestination << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "==============================================================\n";
    cout << "From : Siemreap, Cambodia"<<"\t"<<"Destination: "<< flightDestination << endl;
    cout << "==============================================================\n";
    cout << "\n";
    cout << "Flight Number : YCC111"<<"\t"<<"\t"<<"Seat Number   : 11A" <<  endl;
    cout << "Gate          : 11"<<"\t"<<"\t"<<"Boarding Time : 04:30" << endl;
    cout<<""<<endl;
    cout<<""<<endl;
}

int main(){
    clearScreen();
    int choiceForDestination, choice; 
    ycc_flight();
    bool flightChosen = false;
    while (flightChosen == false){
        cin >> choiceForDestination;
        if (cin.fail()) {
            cin.clear();  // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            cout << "Incorrect input. Please enter a number: ";
            continue;

        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

        
        switch(choiceForDestination){
            case 1:
                clearScreen();
                flight_message("Paris, France");
                flightChosen = true;
                break;
            
            case 2:
                clearScreen();
                flight_message("Tokyo, Japan");
                flightChosen = true;
                break;
            
            case 3: 
                clearScreen();
                flight_message("Phnom Penh, Cambodia");
                flightChosen = true;
                break;

            case 4: 
                clearScreen();
                flight_message("Beijing, China");
                flightChosen = true;
                break;

            case 5: 
                clearScreen();
                flight_message("Hanoi, Vietnam");
                flightChosen = true;
                break;

            default:
                cout<< "Please enter a valid destination number: ";
                break;
        }
    }
    const int MAX_ITEMS = 10; // Maximum number of items that can be ordered
    string items[MAX_ITEMS]; // Array to store selected items
    double prices[MAX_ITEMS]; // Array to store the prices of selected items
    int itemCount = 0; // Counter for the number of items ordered
    bool enteredOutsideOfRange = false;
    bool option = true;

    this_thread::sleep_for(chrono::milliseconds(3000)); 
    clearScreen();

    while (option) {
        MainMenu();

        if (itemCount >= MAX_ITEMS) {
            cout << "\n\nMaximum number of items reached!" << endl;
        }

        if (itemCount > 0){
            DisplayOrderSummary(items, prices, itemCount);
        }
        cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        if (enteredOutsideOfRange) {
            cout << "Please choosen within the available options!\n\n";
        } 

        enteredOutsideOfRange = false;
        cout << "\n";
        cout << "Please select your option: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();  // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            cout << "\nIncorrect input. Please enter a number\n";
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

        switch (choice) {
            case 1: { // Food
                FoodMenu();
                cin >> choice;
                if (cin.fail()) {
                    cin.clear();  // Clear error flags
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                    cout << "\nIncorrect input. Please enter a number\n";
                    continue;
                }

                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

                if (choice == 3) {
                    clearScreen();
                    break; 
                }// Go back to main menu

                // Add selected food item to the bill
                if (itemCount < MAX_ITEMS) {
                    if (choice == 1) {
                        items[itemCount] = "Vegetarian Salad";
                        prices[itemCount] = 7.00;
                        itemCount++;
                    } else if (choice == 2) {
                        items[itemCount] = "Non-Vegetarian Beef Burger";
                        prices[itemCount] = 9.99;
                        itemCount++;
                    } else {
                        enteredOutsideOfRange = true;
                    }
                }
                clearScreen();

                break;
            }

            case 2: { // Beverages
                BeveragesMenu();
                cin >> choice;
                if (cin.fail()) {
                    cin.clear();  // Clear error flags
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                    cout << "\nIncorrect input. Please enter a number\n";
                    continue;
                }

                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

                if (choice == 5) {
                    clearScreen();
                    break; 
                }// Go back to main menu

                // Add selected beverage to the bill
                if (itemCount < MAX_ITEMS) {
                    if (choice == 1) {
                        items[itemCount] = "Coffee";
                        prices[itemCount] = 4.99;
                        itemCount++;
                    } else if (choice == 2) {
                        items[itemCount] = "Hot Green Tea";
                        prices[itemCount] = 1.50;
                        itemCount++;
                    } else if (choice == 3) {
                        items[itemCount] = "Cocacola";
                        prices[itemCount] = 5.79;
                        itemCount++;
                    } else if (choice == 4) {
                        items[itemCount] = "500ml Magical Water";
                        prices[itemCount] = 5.59;
                        itemCount++;
                    } else {
                        enteredOutsideOfRange = true;
                    }
                } 
                clearScreen();
                break;
            }

            case 3: { // Snacks
                SnacksMenu();
                cin >> choice;
                if (cin.fail()) {
                    cin.clear();  // Clear error flags
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                    cout << "\nIncorrect input. Please enter a number\n";
                    continue;
                }

                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

                if (choice == 5) {
                    clearScreen();
                    break; 
                }// Go back to main menu

                // Add selected snack to the bill
                if (itemCount < MAX_ITEMS) {
                    if (choice == 1) {
                        items[itemCount] = "Cheetos Puffs Cheese Flavored";
                        prices[itemCount] = 1.50;
                        itemCount++;
                    } else if (choice == 2) {
                        items[itemCount] = "Oreo";
                        prices[itemCount] = 1.00;
                        itemCount++;
                    } else if (choice == 3) {
                        items[itemCount] = "Doritos Spicy Sweet Chili";
                        prices[itemCount] = 2.00;
                        itemCount++;
                    } else if (choice == 4) {
                        items[itemCount] = "Lay's Roasted Chicken";
                        prices[itemCount] = 4.99;
                        itemCount++;
                    } else {
                        enteredOutsideOfRange = true;
                    }
                }
                clearScreen();
                break;
            }

            case 4: { // Check out
                option = false;
                break;
            }

            case 5: { // Exit
                option = false;
                itemCount = 0;
                cout << "Exiting the menu. Have a great day!" << endl;
                break;
            }

            default:
                cout << "Incorrect choice. Please try again!" << endl;

                break;
        }
    }

    clearScreen();

    if (itemCount > 0){
        DisplayBill(items, prices, itemCount);
        this_thread::sleep_for(chrono::milliseconds(4000)); 
    }

    clearScreen();
    artFlightLeaveSoon();

    this_thread::sleep_for(chrono::milliseconds(3000)); 
    clearScreen();
    art5second();

    this_thread::sleep_for(chrono::milliseconds(1000)); 
    clearScreen();
    art4second();

    this_thread::sleep_for(chrono::milliseconds(1000)); 
    clearScreen();
    art3second();

    this_thread::sleep_for(chrono::milliseconds(1000)); 
    clearScreen();
    art2second();


    this_thread::sleep_for(chrono::milliseconds(1000)); 
    clearScreen();
    art1second();

    this_thread::sleep_for(chrono::milliseconds(500)); 
    clearScreen();
    artPlaneDeparted();

    clearScreen();
    system("afplay 'airplane.mp3' &");
    this_thread::sleep_for(chrono::milliseconds(300)); 
    cout_departure();
    this_thread::sleep_for(chrono::milliseconds(3000)); 

    captainSpeakingMessage();
    this_thread::sleep_for(chrono::milliseconds(3000)); 
    system("afplay 'CaptainSpeaking.mp3'");


    system("afplay 'airplane_land.mp3' &");
    this_thread::sleep_for(chrono::milliseconds(3000)); 

    planeLanding();

    artThankYou();
    cout << "\n\n";

    if (choiceForDestination == 1){
        cout << "You have arrived at your destination: Paris, France";
    } else if (choiceForDestination == 2){
        cout << "You have arrived at your destination: Tokyo, Japan";
    } else if (choiceForDestination == 3){
        cout << "You have arrived at your destination: Phnom Penh, Cambodia";
    } else if (choiceForDestination == 4){
        cout << "You have arrived at your destination: Beijing, China";
    } else if (choiceForDestination == 5){
        cout << "You have arrived at your destination: Hanoi, Vietnam";
    }

    cout << "\n";


    return 0; 
}
