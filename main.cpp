#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
    //Total of them
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodle;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) shake";
    cout<<"\n 6) Chicken-roll";
    cout<<"\n 7) Information regarding sales and collection ";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;


    switch(choice){
    case 1:
        cout<<"\n\n\ Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms>=quant){
            Srooms = Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been allowed to you";
        }else{
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
            break;
        }
        case 2:
        cout<<"\n\n\ Enter Pasta Quantity: ";
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta = Spasta+quant;
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order";
        }else{
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel ";
            break;
        }
        case 3:
        cout<<"\n\n\ Enter Burger Quantity: ";
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger = Sburger+quant;
            Total_burger=Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant<<" burger is the order";
        }else{
            cout<<"\n\tOnly "<<Qburger-Sburger<<" burgers remaining in hotel ";
            break;
        }
        case 4:
        cout<<"\n\n\ Enter Noodle Quantity: ";
        cin>>quant;
        if(Qnoodle-Snoodle>=quant){
            Snoodle = Snoodle+quant;
            Total_noodle=Total_noodle+quant*140;
            cout<<"\n\n\t\t"<<quant<<" noodle is the order";
        }else{
            cout<<"\n\tOnly "<<Qnoodle-Snoodle<<" noodles remaining in hotel ";
            break;
        }
        case 5:
        cout<<"\n\n\ Enter Shakes Quantity: ";
        cin>>quant;
        if(Qshake-Sshake>=quant){
            Sshake = Sshake+quant;
            Total_shake=Total_shake+quant*120;
            cout<<"\n\n\t\t"<<quant<<" shakes is the order";
        }else{
            cout<<"\n\tOnly "<<Qshake-Sshake<<" shakes remaining in hotel ";
            break;
        }
        case 6:
        cout<<"\n\n\ Enter Chicken-roll Quantity: ";
        cin>>quant;
        if(Qchicken-Schicken>=quant){
            Schicken = Schicken+quant;
            Total_chicken=Total_chicken+quant*150;
            cout<<"\n\n\t\t"<<quant<<" chicken is the order";
        }else{
            cout<<"\n\tOnly "<<Qchicken-Schicken<<" chicken-roll remaining in hotel ";
            break;
        }
        case 7:
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
            cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;

            cout<<"\n\n Number of pasta we had: "<<Qpasta;
            cout<<"\n\n Number of pasta we sold "<<Spasta;
            cout<<"\n\n Remaining pasta: "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for the day: "<<Total_pasta;

            cout<<"\n\n Number of burgers we had: "<<Qburger;
            cout<<"\n\n Number of burgers we sold "<<Sburger;
            cout<<"\n\n Remaining burgers: "<<Qburger-Sburger;
            cout<<"\n\n Total bruger collection for the day: "<<Total_burger;

            cout<<"\n\n Number of noodles we had: "<<Qnoodle;
            cout<<"\n\n Number of noodles we sold "<<Snoodle;
            cout<<"\n\n Remaining noodles: "<<Qnoodle-Snoodle;
            cout<<"\n\n Total noodles collection for the day: "<<Total_noodle;

            cout<<"\n\n Number of shakes we had: "<<Qshake;
            cout<<"\n\n Number of shakes we sold "<<Sshake;
            cout<<"\n\n Remaining shakes: "<<Qshake-Sshake;
            cout<<"\n\n Total shakes collection for the day: "<<Total_shake;

            cout<<"\n\n Number of chicken-roll we had: "<<Qchicken;
            cout<<"\n\n Number of chicken-roll we sold "<<Schicken;
            cout<<"\n\n Remaining chicken-roll: "<<Qchicken-Schicken;
            cout<<"\n\n Total chicken-roll collection for the day: "<<Total_chicken;

            cout<<"\n\n\n Total collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodle+Total_shake+Total_chicken;
            break;
        case 8:
            exit(0);

        default:
            cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
    return 0;
}
