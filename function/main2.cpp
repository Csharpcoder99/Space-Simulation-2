//
//  main.cpp
//  function
//
//  Created by Yosef Yada Ysrayl on 2022/05/16.
//

// This is inspired by Return to Space on Netflix

#include <iostream>
#include <unistd.h>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    class Radetion
    {
        public:
        int damage;
        
    };
    
    class People
    {
        public:
        int total_people;
        int person1_health;
        int person2_health;
        string name1;
        string name2;
        
    };
    
    class Rocket_2
    {
        public:
        int speed;
        int weight;
        double distance;
        double direction;
        string name;
        
    };
    
    class Spacestation
    {
        public:
        double direction;
        double distance;
    }; 
    class Rocket
    {
        
       public:
       int speed;
       int weight;
       double direction;
       double distance;
       string name;
        
    };
    class Earth
    {
        public:
        int gravity;
        int gravity_2;
        double direction;
        double distance;
        string name;
    };
    
    Rocket rocket;
    rocket.speed = 1000;
    rocket.weight = 989;
    rocket.direction = 572.47;
    rocket.distance = 98.786;
    rocket.name = "Falcon 9";
    
    Earth earth;
    earth.gravity = 999;
    earth.gravity_2 = 200;
    earth.direction = 326.321;
    earth.distance = 800.321;
    
    Spacestation station;
    station.direction = 574.47;
    station.distance = 100.786;
    
    Rocket_2 rocket_2;
    rocket_2.speed = 400;
    rocket_2.weight = 221;
    rocket_2.direction = 326.321;
    rocket_2.distance = 800.321;
    
    People people;
    people.total_people = 2;
    people.name1 = "Bob";
    people.name2 = "Doug";
    people.person1_health = 200;
    people.person2_health = 200;
    
    Radetion radtion;
    radtion.damage = 30;
    
    
    
    
    
    if (rocket.speed > earth.gravity )
    {
        for (int i = 0; i < 1; i++)
        {
            cout << rocket.name << " will be launching in " << endl;
            
            cout << "3" << endl;
            sleep(1);
            cout << "2" << endl;
            sleep(1);
            cout << "1" << endl;
            sleep(1);
            
            cout << rocket.name << " reach low orbit" << endl;
            people.person1_health = 200 - radtion.damage;
            people.person2_health = 200 - radtion.damage;
            //time code
            /* Declaring argument for time()
            time_t tt;
          
             Declaring variable to store return value of
            // localtime()
            struct tm * ti;
          
            // Applying time()
            time (&tt);
          
            // Using localtime()
            ti = localtime(&tt);
          
            cout << "Current Day, Date and Time is: " << asctime(ti);
            */
            
            rocket.direction = 572.47 + 2;
            
            if (rocket.direction == station.direction)
            {
                cout << rocket.name << " is facing the the space station" << endl;
                cout << "Station Direction: " << station.direction << endl;
                cout << "Rocket Direction:  " << rocket.direction << endl;
                
                cout << "Station Distance: "  << station.distance << endl;
                cout << "Rocket Distance: " << rocket.distance << endl;
                people.person1_health = 170 - radtion.damage;
                people.person2_health = 170 - radtion.damage;
                cout << "Person Health: " << people.person1_health << " Person 2 Health: " << people.person2_health << endl;
                
                
                rocket.distance = 98.786 + 2;
                
                if (rocket.distance == station.distance)
                {   
                    cout << rocket.name << " reached the space station" << endl;
                    sleep(1);
                    people.person1_health = 120 - radtion.damage;
                    people.person2_health = 120 - radtion.damage;
                    //Declaring argument for time()
                    time_t tt;
                  
                    //Declaring variable to store return value of
                    // localtime()
                    struct tm * ti;
                  
                    // Applying time()
                    time (&tt);
                  
                    // Using localtime()
                    ti = localtime(&tt);
                  
                    cout << "Current Day, Date and Time is: " << asctime(ti);
                    //1652697093
                    //1652697112
                    
                    cout << rocket.name << " will be leaving in " << endl;
                    
                    cout << "3" << endl;
                    sleep(1);
                    cout << "2" << endl;
                    sleep(1);
                    cout << "1" << endl;

                    swap (rocket_2.direction, earth.direction);
                        
                    if (rocket_2.direction == earth.direction)
                    {
                        cout << "Rocket_2 direction is facing earth_direction" << endl;
                        people.person1_health = 140 - radtion.damage;
                        people.person2_health = 140 - radtion.damage;
                        if (rocket_2.distance == earth.distance)
                        {
                            cout << rocket.name << " is leaving the station" << endl;
                                
                            if (rocket_2.speed > earth.gravity_2)
                            {
                                cout << people.name1 << people.name2 << rocket.name << " successfuly reached earth" << endl;
                            }
                            else
                            {
                                cout << rocket.name << " blew up trying to reach earth " << endl;
                            }
                            
                                
                        }
                    }
                        
                    
                    
                }
                
                
                
                
            }
            else
            {
                cout << rocket.name << " is not facing the space station" << endl;
                cout << rocket.direction << endl;
            }
            
            
        }
    }else
    {
        cout << rocket.name << " blew up in the process of launching" << endl;
        exit(1);
    }
    
    
    
    
    return 0;
}
