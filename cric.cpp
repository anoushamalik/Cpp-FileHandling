#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

void printArray(int arr[], int s)
{
    for (int i = 0; i < s; ++i)
    {
        cout <<"      "<< i<<" " <<arr[i] << "\n";
    }
    cout<<endl;

}
void betweentwoyear(string span[],string name[],int s,string y,string year,int r[],int av[])
{
    int d;
    cout<<"Player Name\t\t\tspan\tRuns\tAverage"<<endl;
    for (int i=0; i<s; i++)
    {
        if(span[i].substr(0,4)>=y&&span[i].substr(5,9)<=year)
        {
            cout<<name[i];
            d=30-name[i].size();
            for(int j=0; j<d; j++)
            {
                cout<<" ";
            }
            cout<<span[i]<<"\t"<<r[i]<<"\t"<<av[i]<<endl;
        }
    }
}





void printArray(int s,string arr[],string sp[],int ma[],int in[],int no [],int ru[],int hs[],int av[],int bf[],int sr[], int hn[],int fi[],int zr[])
{
    cout<<"         Player Name                        "<<"  SPAN            "<<"MAT     "<<"INN     "<<"NO   "<<"RUNS   "<<"HIS  "<<"AVE  "<<"BF     "<<"SR   "<<"HUN   "<<"FIF   "<<"ZERO"<<endl;
    cout<<endl;
    for (int i = 0; i < s; ++i)
    {

        cout << i<<"  ";
        if(i<10)
            cout<<"     ";
        if(i<100 && i>10)
            cout<<"    ";
        if(i<1000 && i>100)
            cout<<"   ";
        if(i<10000  && i>1000)
            cout<<"  ";
        cout <<arr[i]<<"  ";

        for(int i=0 ; i<(35-arr[i].size()) ; i++)
        {
            cout<<" ";
        }

        cout<< sp[i] <<"    ";
        if(i<10)
            cout<<"     ";
        if(i<100&&i>10)
            cout<<"    ";
        if(i<1000&&i>100)
            cout<<"   ";
        cout <<"  "<< ma[i] <<"     "<< in[i] <<"     "<<no[i]<<"   "<<ru[i]<<"  "<<hs[i]<<"  "<<av[i]<<"  "<<bf[i] <<"   "<<sr[i]<<"    "<<hn[i]<<"    "<<fi[i]<<"    "<<zr[i] <<endl;

    }
    cout<<endl;
}


void read_file(int firstcol[],string playerName[],string  span[],int matches[],
               int inns[],int notOuts[],int runs[],int  highestScore[],int average[],
               int ballsFaced[],int strikeRate[],int hundreds[],int fifties[],int zeros[])
{
    ifstream ip("ODI data.csv");


    if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

    string vfirstcol;
    string vPlayer;
    string vSpan;
    string vMatches;
    string vInns;
    string vNotOuts;
    string vRuns;
    string vHS;
    string vAvg;
    string vBF;
    string vSR;
    string vHundred;
    string vFifty;
    string vZero;


    int i=1;
    int index=0;
    while(ip.good())
    {
        getline(ip,vfirstcol,',');
        getline(ip,vPlayer,',');
        getline(ip,vSpan,',');
        getline(ip,vMatches,',');
        getline(ip,vInns,',');
        getline(ip,vNotOuts,',');
        getline(ip,vRuns,',');
        getline(ip,vHS,',');
        vHS.erase(remove(vHS.begin(), vHS.end(), '*'), vHS.end());
        getline(ip,vAvg,',');
        getline(ip,vBF,',');
        getline(ip,vSR,',');
        getline(ip,vHundred,',');
        getline(ip,vFifty,',');
        getline(ip,vZero,'\n');
        if(i==1)
        {
            i++;
            //cout<<"before \n";
            continue;

        }
        //cout<<"Hi "<< vPlayer;
        try
        {
            //cout<<vfirstcol<<endl;
            firstcol[index] = stoi(vfirstcol);
            playerName[index] = vPlayer;
            span[index] = vSpan;
            matches[index] = stoi(vMatches);
            inns[index] = stoi(vInns);;
            notOuts[index] = stoi(vNotOuts);
            runs[index] = stoi(vRuns);
            highestScore[index] = stoi(vHS);
            average[index] = stoi(vAvg);
            ballsFaced[index] = stoi(vBF);;
            strikeRate[index] = stoi(vSR);
            hundreds[index] = stoi(vHundred);
            fifties[index] = stoi(vFifty);
            zeros[index] = stoi(vZero);


        }
        catch(std::invalid_argument e)
        {
            //cout << "Caught Invalid Argument Exception\n";
        }

        index++;
        //cout<<"index "<<index<<endl;;
        /*if(i==10)
        {
            break;
        }*/
        i++;
    }

    ip.close();

}


/*void startingyear(string playerName[],string span[],int matches[],int inns[],int notout[],int runs[], int highestdcores[],int avg[],int ballfaced[],int strikerate[], int hundreds[], int fifties[], int zeros[],2490,string year)
{

    cout<<"PlayerName"<<"/t"<<"Span"<<"/t"<<"Matches"<<"/t"<<"Innings"<<"/t"<<"Not Out"<<"/t"<<"Runs"<<"/t"<<"Highest Score"<<"/t"<<"Average"<<"/t"<<"Ball Faced"<<"/t"<<"Strike Rate"<<"/t"<<"Hundreds"<<"/t"<<"Fifties"<<"/t"<<"zeros"<<"/t"<<endl;
    for (int i=0; i<2490; i++)
    {
        if(span[i].substr(0,4)>=year)
        {



            cout<<left<<setw(30)<<playerName[i]<<"/t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"/t"<<notout[i]<<"/t"<<runs[i]<<"/t"<<highestscores[i]<<"/t"<<avg[i]<<"/t"<<ballfaced[i]<<"/t"<<strikerate[i]<<"/t"<<hundreds[i]<<"/t"<<fifties[i]<<"/t"<<zeros[i]<<endl;
        }
    }
}*/
/*oid aftergivenyear(string span[],string name[],int s,string y,int r[],int av[])
{
    int d;
    cout<<"Player Name\t\t\tspan\tRuns\tAverage"<<endl;
    for (int i=0; i<s; i++)
    {
        if(span[i].substr(0,4)<=y)
        {
            cout<<name[i];
            d=30-name[i].size();
            for(int j=0; j<d; j++)
            {
                cout<<" ";
            }
            cout<<span[i]<<"\t"<<r[i]<<"\t"<<av[i]<<endl;
        }
    }
}
void betweentwoyear(string span[],string name[],int s,string y,string year,int r[],int av[])
{
    int d;
    cout<<"Player Name\t\t\tspan\tRuns\tAverage"<<endl;
    for (int i=0; i<s; i++)
    {
        if(span[i].substr(0,4)>=y&&span[i].substr(5,9)<=year)
        {
            cout<<name[i];
            d=30-name[i].size();
            for(int j=0; j<d; j++)
            {
                cout<<" ";
            }
            cout<<span[i]<<"\t"<<r[i]<<"\t"<<av[i]<<endl;
        }
    }
}*/

int main()
{

    int data_size = 2490;


    int firstcol[data_size];
    string playerName[data_size];
    string  span[data_size];
    int matches[data_size];
    int inns[data_size];
    int notOuts[data_size];
    int runs[data_size];
    int highestScore[data_size];
    int average[data_size];
    int ballsFaced[data_size];
    int strikeRate[data_size];
    int hundreds[data_size];
    int fifties[data_size];
    int zeros[data_size];

    read_file(firstcol,playerName,span,matches,
              inns,notOuts,runs,highestScore,average,
              ballsFaced,strikeRate,hundreds,fifties,zeros);


    int show;

    cout<<"Press 1 for Searching Of Players On The Basis Of Highest Score :\n";
    cout<<endl;
    cout<<"Press 2 For Searching Specific Name Of Player :\n";
    cout<<endl;
    cout<<"Press 3 For Players Record That Have Started Their Career :\n";
    cout<<endl;
    cout<<"Press 4 for Total Hundereds , Fifties and Zeros Of A specific Country :\n";
    cout<<endl;
    cout<<"Press 5 For Searching Player Names In A Specific Country In Alphabetical Order :\n";
    cout<<endl;
    cout<<"Press 6 For Searching Specific Name Of Player From Specific Country :\n";
    cout<<endl;
    cout<<"Press 7 For Searching Players Record Started Their Career Specific In A Country :\n";
    cout<<endl;
    cout<<"Press 9 For Searching Best player On Basis Of Runs :\n";
    cout<<endl;


    while(show!=10)
    {
        cout<<endl;
        cout<<"What you want To Search: ";
        cout<<endl;
        cin>>show;



        switch (show)
        {
        case 1:
        {

            for(int a=0; a<2490; a++)
            {
                for(int b=a+1; b<2490; b++)
                {

                    if(runs[b]>runs[a])
                    {
                        int l=0;
                        l=runs[a];
                        runs[a]=runs[b];
                        runs[b]=l;
                        string temp = playerName[a];
                        playerName[a] = playerName[b];
                        playerName[b] = temp;
                        string temp2 = span[a];
                        span[a]=span[b];
                        span[b]=temp2;
                        int temp3=matches[a];
                        matches[a]=matches[b];
                        matches[b]=temp3;
                        int temp4=inns[a];
                        inns[a]=inns[b];
                        inns[b]=temp4;
                        int temp5=notOuts[a];
                        notOuts[a]=notOuts[b];
                        notOuts[b]=temp5;
                        int temp6=highestScore[a];
                        highestScore[a]=highestScore[b];
                        highestScore[b]=temp6;
                        int temp7=average[a];
                        average[a]=average[b];
                        average[b]=temp7;
                        int temp8=ballsFaced[a];
                        ballsFaced[a]=ballsFaced[b];
                        ballsFaced[b]=temp8;
                        int temp9=strikeRate[a];
                        strikeRate[a]=strikeRate[b];
                        strikeRate[b]=temp9;
                        int temp10=hundreds[a];
                        hundreds[a]=hundreds[b];
                        hundreds[b]=temp10;
                        int temp11=fifties[a];
                        fifties[a]=fifties[b];
                        fifties[b]=temp11;
                        int temp12=zeros[a];
                        zeros[a]=zeros[b];
                        zeros[b]=temp12;
                    }

                }
            }
            int count = 0;
            char choice;
            while(choice!='N')
            {
                count = count + 20;
                cout<<"Enter Y to see data of next 20 players and N to quit.\n";
                cin>>choice;
                if(choice=='Y')
                {
                    cout<<"                 "<<"Player Name             "<<"  SPAN         "<<"MAT   "<<"  INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"      BF  "<<"  SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                    cout<<endl;
                    for(int i=count-20; i<count; i++)
                    {
                        //if(playerName[i].find(countryName)!=string::npos)
                        {


                            cout<<i+1<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<< notOuts[i]<<"\t"<<runs[i]<<"\t"<< highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<< hundreds[i]<<"\t"<< fifties[i]<<"\t"<< zeros[i]<<endl;
                        }
                    }
                }
            }

            break;

        }
        case 2:
        {
            string player;

            cout<<endl;
            cout<<"Enter Specific Player:"<<endl;
            cin>>player;
            cout<<endl;
            cout<<"         "<<" Player Name            "<<"         SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"     BF  "<<"   SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
            cout<<endl;


            for(int i=0; i<2489; i++)
            {

                if(playerName[i].find(player)!=string::npos)
                {
                    cout<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<< highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<< hundreds[i]<<"\t"<< fifties[i]<<"\t"<< zeros[i]<<endl;
                }
            }



            break;
        }
        case 3:
        {
            int records;
            cout<<"Players Records \n";
            cout<<endl;
            cout<<"Press 1 From Given Year :\n";
            cout<<endl;
            cout<<"press 2 Between Two Years :\n";
            cout<<endl;
            cout<<"press 3 For After Given Year:\n";
            cout<<endl;
            cin>>records;

            switch (records)

            {
            case 1:
            {
                string year;
                cout<<"Players From Given Year :\n";
                cout<<endl;
                cout<<"Enter Year :\n";
                cin>>year;
                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;

                for (int i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>=year)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;

            }
            case 2 :
            {
                string year1,year2;
                cout<<"Players Between Two Years :\n";
                cout<<endl;
                cout<<"Enter Starting year :\n";
                cin>>year1;
                cout<<endl;
                cout<<"Enter Ending Year :\n";
                cin>>year2;

                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;

                for ( int  i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>=year1&&span[i].substr(5,9)<=year2)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;

            }
            case 3:
            {
                string year;
                cout<<"Players After This Year :\n";
                cout<<endl;
                cout<<"Enter Year :\n";
                cin>>year;
                cout<<endl;
                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;
                for (int i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>year)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;


            }



            }

            case 4:
            {
                int hun=0;
                int fif=0;
                int zer=0;
                string country;
                cout<<"Enter Country Name :"<<endl;
                cin>>country;
                cout<<endl;

                cout<<"         Player Name "<<"              Hundereds "<<"Fifties "<<"Zeros   "<<endl;
                cout<<endl;
                for(int i=0; i<2489; i++)
                {
                    if(playerName[i].find(country)!=string::npos)
                    {
                        cout<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                        hun=hun+hundreds[i];
                        fif=fif+fifties[i];
                        zer=zer+zeros[i];


                    }
                }

                cout<<endl;
                cout<<endl;
                cout<<"TOTAL HUNDEREDS  = "<<hun;
                cout<<endl;
                cout<<endl;
                cout<<"Total FIfties = "<<fif;
                cout<<endl;
                cout<<endl;
                cout<<"Total Zeros = "<<zer;
                cout<<endl;


                break;

            }
            case 5:
            {
                string countryName;
                //char k;
                cout<<"Enter Specific Country :\n";
                cin>>countryName;
                cout<<endl;

                string temp1,temp2;
                int temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13;
                for(int i=0; i<2489; i++)
                {
                    for(int j=i+1; j<2489; j++)
                    {
                        if(playerName[j]<playerName[i])
                        {
                            temp1=playerName[i];
                            playerName[i]=playerName[j];
                            playerName[j]=temp1;
                            temp2=span[i];
                            span[i]=span[j];
                            span[j]=temp2;
                            temp3=matches[i];
                            matches[i]=matches[j];
                            matches[j]=temp3;
                            temp4=inns[i];
                            inns[i]=inns[j];
                            inns[j]=temp4;
                            temp5=notOuts[i];
                            notOuts[i]=notOuts[j];
                            notOuts[j]=temp5;
                            temp6=runs[i];
                            runs[i]=runs[j];
                            runs[j]=temp6;
                            temp7=highestScore[i];
                            highestScore[i]=highestScore[j];
                            highestScore[j]=temp7;
                            temp8=average[i];
                            average[i]=average[j];
                            average[j]=temp8;
                            temp9=ballsFaced[i];
                            ballsFaced[i]=ballsFaced[j];
                            ballsFaced[j]=temp9;
                            temp10=strikeRate[i];
                            strikeRate[i]=strikeRate[j];
                            strikeRate[j]=temp10;
                            temp11=hundreds[i];
                            hundreds[i]=hundreds[j];
                            hundreds[j]=temp11;
                            temp12=fifties[i];
                            fifties[i]=fifties[j];
                            fifties[j]=temp12;
                            temp13=zeros[i];
                            zeros[i]=zeros[j];
                            zeros[j]=temp13;


                        }
                    }
                }




                int count = 0;
                int c = 0;
                int oldi = 0;
                char choice;
                int i=0;
                while(choice!='N')
                {
                    count = count + 20;

                    cout<<"Enter Y to see data of next 20 players and N to quit.\n";
                    cin>>choice;
                    if(choice=='Y')
                    {
                        cout<<"                 "<<"Player Name             "<<"  SPAN         "<<"MAT   "<<"  INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"      BF  "<<"  SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                        cout<<endl;

                        for(i=oldi; i<2490; i++)
                        {

                            if(playerName[i].find(countryName)!=string::npos)
                            {
                                if(c>count)
                                {

                                    break;
                                }



                                cout<<i+1<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<< notOuts[i]<<"\t"<<runs[i]<<"\t"<< highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<< hundreds[i]<<"\t"<< fifties[i]<<"\t"<< zeros[i]<<endl;
                                c++;
                            }

                        }
                        oldi=i;
                    }
                }


                break;
            }

            case 6:
            {
                string country;
                string player;
                cout<<"Enter Specific Country :\n";
                cin>>country;
                cout<<endl;
                cout<<"Enter Player Name :\n";
                cin>>player;
                cout<<endl;
                cout<<"          Player Name            "<<"         SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;



                for(int i=0; i<2489; i++)
                {
                    if(playerName[i].find(country)!=string::npos)
                    {





                        if(playerName[i].find(player)!=string::npos)
                        {
                            cout<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<< highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<< hundreds[i]<<"\t"<< fifties[i]<<"\t"<< zeros[i]<<endl;
                        }
                    }



                }


                break;
            }
            case 7:
            {
            int records;
            cout<<"Players Records \n";
            cout<<endl;
            cout<<"Press 1 From Given Year :\n";
            cout<<endl;
            cout<<"press 2 Between Two Years :\n";
            cout<<endl;
            cout<<"press 3 For After Given Year:\n";
            cout<<endl;
            cin>>records;

            switch (records)
            {
                cout<<"Players From Specific Country :\n";
                cout<<endl;
            case 1:
            {
                string year,countryName;

                cout<<"Enter Country Name :\n";
                cout<<endl;
                cin>>countryName;
                cout<<endl;

                cout<<"Players From Given Year :\n";
                cout<<endl;
                cout<<"Enter Year :\n";
                cin>>year;
                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;

                for (int i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>=year&&playerName[i].find(countryName)!=string ::npos)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;

            }
            case 2 :
            {
                string year1,year2,countryName;
                cout<<"Enter Country Name :\n";
                cout<<endl;
                cin>>countryName;
                cout<<endl;
                cout<<"Players Between Two Years :\n";
                cout<<endl;
                cout<<"Enter Starting year :\n";
                cin>>year1;
                cout<<endl;
                cout<<"Enter Ending Year :\n";
                cin>>year2;

                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;

                for ( int  i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>=year1&&span[i].substr(5,9)<=year2&&playerName[i].find(countryName)!=string ::npos)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;

            }
            case 3:
            {
                string year,countryName;
                cout<<"Enter Country Name :\n";
                cout<<endl;
                cin>>countryName;
                cout<<endl;
                cout<<"Players After This Year :\n";
                cout<<endl;
                cout<<"Enter Year :\n";
                cin>>year;
                cout<<endl;
                cout<<" Player Name            "<<"          SPAN          "<<"MAT     "<<"INN   "<<"  NO   "<<"   RUNS   "<<" HIS  "<<"  AVE  "<<"    BF  "<<"    SR   "<<"  HUN   "<<"   FIF   "<<" ZERO"<<endl;
                cout<<endl;
                for (int i=0; i<2490; i++)
                {
                    if(span[i].substr(0,4)>year&&playerName[i].find(countryName)!=string ::npos)
                    {



                        cout<<left<<setw(30)<<playerName[i]<<"\t"<<span[i]<<"\t"<<matches[i]<<"\t"<<inns[i]<<"\t"<<notOuts[i]<<"\t"<<runs[i]<<"\t"<<highestScore[i]<<"\t"<<average[i]<<"\t"<<ballsFaced[i]<<"\t"<<strikeRate[i]<<"\t"<<hundreds[i]<<"\t"<<fifties[i]<<"\t"<<zeros[i]<<endl;
                    }
                }
                break;


            }
            }

                break;
            }
            case 9:

            {

                for(int i =0; i<2490; i++)
                {
                    for(int j=i+1; j<2490; j++)
                    {
                        if(runs[i]<runs[j])
                        {
                            int temp1 =runs[i];
                            runs[i]=runs[j];
                            runs[j]=temp1;
                            string temp2=playerName[i];
                            playerName[i]=playerName[j];
                            playerName[j]=temp2;
                        }
                    }
                }
                cout<<"             Player Name    "<<"             Runs       "<<endl;
                cout<<endl;
                for(int i=0; i<5; i++)
                {
                    cout<<i+1<<"\t"<<left<<setw(30)<<playerName[i]<<"\t"<<runs[i]<<endl;
                }
                break;
            }



            default:
            {
                cout<<"Invalid Input Please Try Again ::Shukriya::"<<endl;
            }
            cout<<endl;

            }
        }
     }





        return 0;
        }

