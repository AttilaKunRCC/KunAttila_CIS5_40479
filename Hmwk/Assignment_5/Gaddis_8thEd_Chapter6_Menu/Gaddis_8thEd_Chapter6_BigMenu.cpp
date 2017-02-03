/* 
  File:   /* 
 * File:   Gaddis_8thEd_Chapter6_BigMenu.cpp
 * Author: Attila Kun *
 * Created on February 2, 2017, 9:14 PM
 *The 10th problem will be for you to create a menu, that has all the 9 problems in 1 program/project.  Use the following menu and example as a guideline
 * https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/master/Lab/ExampleMenuWithSwitchAndDoWhileLoop/main.cpp
 * https://github.com/ml1150258/LehrMark_CSC5_CIS5_40488-9_40107-8/blob/master/Lab/ExampleMenuWithSwitchAndDoWhileLoopWith3Problems/main.cpp
 *
 *
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <fstream>


using namespace std;

//Function Prototypes
float getSales();
float findHighest(float, float, float, float);
float calculateRetail(float, float);
int getNumAccidents(int&);
int coinToss(int &, int &);
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
void getJudgeData(float &);
float calcScore(float, float, float, float, float);
int findHighest(float, float, float, float, float);
int findLowest(float, float, float, float, float);
float calcData(int, float, float, float);
float calcData(float, float);
void getData(int &, float &, float &, float &, float &, int);
float stockProfitLoss(int, float, float, float, float);
float totalProfitLoss(int);
bool isPrime(int);


//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
char choice;
    
//Loop on the menu
do{
    
        //Input values
        cout<<"Choose from the list:"<<endl;
        cout<<"Type 1 for Problem with --> Wholesale cost and its markup percentage"<<endl;
        cout<<"Type 2 for Problem with --> Sales divisions "<<endl;
        cout<<"Type 3 for Problem with --> Number of Accidents "<<endl;
        cout<<"Type 4 for Problem with --> Coin Toss"<<endl;
        cout<<"Type 5 for Problem with --> Average of a group"<<endl;
        cout<<"Type 6 for Problem with --> 5 Judges"<<endl;
        cout<<"Type 7 for Problem with --> Patient hospital stay"<<endl;
        cout<<"Type 8 for Problem with --> Stock Profit"<<endl;
        cout<<"Type 9 for Problem with --> Prime Numbers"<<endl;
        cout<<"Type 10 for Problem with --> Prime Numbers to 100 save to file"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                 // Gaddis_8thEd_Chapter6_Prob1.cpp
                 //Declare Variables                 
                        
                        float wlSale;
                        float markPercent, total;

                        //set up numeric output formatting
                        cout << fixed << showpoint << setprecision(2);

                        //ask a user to enter an item wholesale cost and it's markup percentage
                        cout << "Enter a whole sale cost: ";
                        cin >> wlSale;

                        //it should then display the item retail price
                        if(wlSale < 0){
                                cout << "ERROR enter positive number " << endl;
                                cin >> wlSale;
                        }

                        cout << "Enter marked percent: ";
                        cin >> markPercent;

                        if(markPercent < 0){
                                cout << "ERROR enter positive number " << endl;
                                cin >> markPercent;
                        }

                        markPercent = markPercent * .01; //so 50 converts to .50%	
                        total = calculateRetail(wlSale, markPercent); //function call

                        cout << fixed << setprecision(2);
                        //fixed so it for all output	
                        cout << "Retail Price is " << total;

                        break;
                    }                        
        
            case '2':{
                 //Gaddis_8thEd_Chapter6_Prob3.cpp
                //Declare the 4 divisions
                        float northEast=0.0f;
                        float southEast=0.0f;
                        float northWest=0.0f;
                        float southWest=0.0f;

                        //Input values. Asks the user for each division's sales figures
                        cout << "Enter NorthEast sales!" ;
                        northEast = getSales();
                        cout << "Enter SouthEast sales!"; 
                        southEast = getSales();
                        cout << "Enter NorthWest sales!$";
                        northWest = getSales();
                        cout << "Enter SouthWest sales!";
                        southWest = getSales();

                        //Process by mapping inputs to outputs
                        findHighest(northEast, southEast, northWest, southWest);
                
                        break;
            }//case '2'
                         
            case '3':{
                // Gaddis_8thEd_Chapter6_Prob4.cpp
                            //Declare Variables
                            int north=0, south=0, east=0, west=0, central=0;

                            //Input values
                            cout << "Enter the number of auto accidents in north side: ";
                            getNumAccidents(north);
                            cout << "Enter the number of auto accidents in south side: ";
                            getNumAccidents(south);
                            cout << "Enter the number of auto accidents in east side: ";
                            getNumAccidents(east);
                            cout << "Enter the number of auto accidents in west side: ";
                            getNumAccidents(west);
                            cout << "Enter the number of auto accidents in central side: ";
                            getNumAccidents(central);

                            //Process by mapping inputs to outputs
                            findLowest(north, south, east, west, central);

                            break;
                        }
            //case '3'
                 
            case '4':{
                        //Gaddis_8thEd_Chapter6_Prob8_CoinToss.cpp
                        //set the seed
                       unsigned seed = time(0);    //set the seed
                       srand(seed);                //generate new random number   

                       //Declare Variables
                       int toss=0, heads=0, tails=0, total=0;

                       //Input values
                       cout << "How many times do you want to flip the coin: ";
                       cin >> toss;

                       //Output values
                       for(int run=0; run < toss; run++){
                           coinToss(heads, tails);
                       }

                       total = heads + tails;
                       cout << "Out of " << total << " the coin flipped heads: " << heads << " times\n"
                            << "And the coin flipped tails: " << tails << " times\n";
                       
                       break;
            }//end case '4'
    
           case '5':{
                     //Gaddis_8thEd_Chapter6_Prob11.cpp
                      //Declare Variables
                            int score1, score2, score3, score4, score5;

                            getScore(score1);
                            getScore(score2);
                            getScore(score3);
                            getScore(score4);
                            getScore(score5);

                            calcAverage(score1, score2, score3, score4, score5);                     
                            break; 
           }//end case '5'
           
           case '6':{
                //Gaddis_8thEd_Chapter6_Prob12.cpp
                
                            float Score1, Score2, Score3, Score4, Score5;

                            // Call function getJudgeData once for each judge
                            getJudgeData(Score1);
                            getJudgeData(Score2);
                            getJudgeData(Score3);
                            getJudgeData(Score4);
                            getJudgeData(Score5);

                            cout << "\nThe contestant’s score is ";

                            // Call function calcScore passing to it the five scores 
                            cout << calcScore(Score1, Score2, Score3, Score4, Score5);
                            break;
           }//end case '6'
            
            case '7':{ 
                //Gaddis_8thEd_Chapter6_Prob15.cpp
                 //Declare Variables
                        char inOut; //for in-patient or out-patient
                        int NumberDays; //number of days in hospital
                        float dailyRate, servCharges, medCharges, totalCharges;

                        //Input values
                        cout<<"Is the patient still in the hospital! Enter 'I' for in-patient and 'O'\n";
                        cin>>inOut;

                        //Process by mapping inputs to outputs
                        switch(inOut){
                                    case 'i' :
                                    case 'I' :  do{
                                                    cout << "How many days were spent in the hospital? ";
                                                    cin  >> NumberDays;
                                                    if (NumberDays < 0)
                                                    {
                                                            cout << "Number of days must be greater than 0.\n";
                                                    }
                                                    } while(NumberDays < 0);
                                                do{
                                                    cout << "What was the daily rate? ";
                                                    cin  >> dailyRate;
                                                        if (dailyRate < 0){
                                                                    cout << "Daily rate must be greater than 0.\n";
                                                        }
                                                    } while(dailyRate < 0);
                                    case 'o' :
                                    case 'O' :  do{
                                                    cout << "Enter the charges for hospital services " << "(lab tests, etc.): ";
                                                    cin  >> servCharges;
                                                        if (servCharges < 0){
                                                                    cout << "Charges for hospital services must be greater than 0.\n";
                                                        }
                                                } while (servCharges < 0);

                                                    do{
                                                    cout << "Enter the hospital medication charges: ";
                                                    cin  >> medCharges;
                                                        if (medCharges < 0){
                                                            cout << "Hospital medication charges must be greater than 0.\n";
                                                        }
                                                    } while(medCharges < 0);

                        }
                        cout << right << fixed << showpoint << setprecision(2);

                        switch(inOut){
                                    case 'i' :
                                    case 'I' : totalCharges = calcData(NumberDays, dailyRate, servCharges, medCharges);
                                                    cout << "Number of days spent in the hospital : " << setw(11) << NumberDays << endl;
                                                    cout << "Daily rate                           : $" << setw(10) << dailyRate << endl;
                                                    break;
                                    case 'o' :
                                    case 'O' : totalCharges = calcData(servCharges, medCharges);		
                            }//end switch (inOut)

                        cout << "Charges for hospital services: $" << setw(10) << servCharges << endl;
                        cout << "Hospital medication charges  : $" << setw(10) << medCharges << endl;
                        cout << "Total charges                : $" << setw(10) << totalCharges << endl;
                 break; 
            }//end case '7'    
            
            case '8':{
                    //Gaddis_8thEd_Chapter6_Prob21.cpp
                      int nSales;
                        float Total;

                        cout << "Calculate the total profit (or loss) from  sales of stock.\n";
                        cout << "What is the number of stock sales? ";
                        cin  >> nSales;

                        Total = totalProfitLoss(nSales);

                        cout << "Total profit or loss from sales of stock: $";
                        cout << fixed << showpoint << setprecision(2);
                        cout << Total << endl << endl;
                      break; 
               }//end case '8'   
               
               case '9':{
                    //Gaddis_8thEd_Chapter6_Prob22.cpp
                    int number;
                    cout << "Enter a number to find out if it's prime or not: ";
                    cin >> number;

                    if(isPrime(number))
                        cout << "The number " << number << " is prime.\n";
                    else 
                        cout << "The number " << number << " is not prime.\n";
                    
                    
                    break; 
                           
               }//end case '9'
               
               case 10:{
                    //Gaddis_8thEd_Chapter6_Prob23.cpp
                    int number;    
                    isPrime(number); 

                    ofstream outFile;
                    outFile.open("1-100.txt");

                    for(int i=1;i<100;i++){
                        if(isPrime(i)){
                            outFile<<i<<"\t"<<endl;
                        }
                    }//end for loop
                    break; 
                           
               }//end case '10'
                 
               default:
                         cout<<"You are exiting the program"<<endl;
               }
    }while(choice>='1' && choice<= 10);
    
    
    //Exit stage right!
    return 0;
}

float calculateRetail(float num1, float num2){
                                    float answer;		//local variable its scope is only in function
                                    answer = (num1*num2) + num1;
                                    return answer;
}

//for Prob 4
float getSales(){
                          float sales = 0.0f;
                          cout << "\nWhat is the sales for this division?";
                          cin >> sales;      
                          if(sales < 0)
                                    {
                                    cout << "Error: Only enter sale figures above zero";
                                    exit(0);
                                    }
return sales;    
}
float findHighest (float neSales, float seSales, float nwSales, float swSales){
                            if(neSales >= seSales && neSales >= nwSales && neSales >= swSales){
                                cout << "The highest number is: " << neSales << " at NorthEast.";
                            }
                            if(seSales >= neSales && seSales >= nwSales && seSales >= swSales){
                                cout << "The highest number is: " << seSales << " at SouthEast.";
                            }
                            if(nwSales >= neSales && nwSales >= swSales && nwSales >= swSales){
                                cout << "The highest number is: " << nwSales << " at NorthWest.";
                            }
                            if(swSales >= neSales && swSales >= seSales && swSales >= nwSales){
                                cout << "The highest number is: " << swSales << " at SouthWest.";
                            }
return 0;
}

int getNumAccidents(int &number){
                            cin >> number;
                            while(number < 0){
                                cout << "The number is below 0. Input a positive number:" << number;
                            }
return number;    
}
int findLowest(int n, int s, int e, int w, int c){
                            if(n <= s && n <= e && n <= w && n <= c){
                                cout << "The lowest number is: " << n << " at North.";
                            }
                            if(s <= n && s <= e && s <= w && s <= c){
                                cout << "The lowest number is: " << s << " at South.";
                            }
                            if(e <= n && e <= s && e <= w && e <= c){
                                cout << "The lowest number is: " << w << " at East.";
                            }
                            if(w <= n && w <= s && w <= e && w <= c){
                                cout << "The lowest number is: " << c << " at West.";
                            }
                            if(c <= n && c <= s && c <= e && c <= w){
                                cout << "The lowest number is: " << c << " at Central.";
                            }
return 0;
}
int coinToss(int &head, int &tail){    
         
    //assign 2 random number from 1 to 2
    int number = rand()%2+1;       //from 1 to 2

    //if rand number == 1 then ++head else ++tails
    if(number == 1) head++;
    else if (number == 2) tail++;
    
    return 0;
    
}
void getScore(int &score){    
         
    //Input values
    cout << "Enter a score: ";
    cin >> score;
    if(score < 0 || score > 100){
    	cout << "Invalid test score! "
    			<< "Test score must be between 0 and 100.";  			
	}
}



void calcAverage(int score1, int score2, int score3, int score4, int score5){
	// Find lowest and average.
	int lowest = findLowest(score1, score2, score3, score4, score5);
	float average = (((float)score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;

	// Print them out..
	cout << setw(4);
	cout << fixed << showpoint << setprecision(2);
	cout << "The average of the 4 highest scores is " << average << endl;
}

void getJudgeData(float &Score)
{
	do
	{
		cout << "Enter a judge’s score: ";
	    cin  >> Score;

	    if (Score < 0 || Score > 10)
	    {
	    	cout << "\nError! Invalid score.\n"
	    		 << "Judge score must be greater than 0 and less than 10.\n";
	    }

	} while (Score < 0 || Score > 10);
}

float calcScore(float Score1, float Score2, float Score3, float Score4,
	             float Score5)
{	
	int    High, Low;
	float  Avg; 

	// Call function findHighest and findLowest passing 5 scores to them
	High = findHighest(Score1, Score2, Score3, Score4, Score5);	
	Low  = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (High == static_cast<int>(Score1))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score2))
	{
		if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score1 + Score5)/3;
		else
			Avg = (Score1 + Score3 + Score4)/3;
	}
	else if (High == static_cast<int>(Score3))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score1 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score2 + Score4 + Score5)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score1 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score1 + Score4)/3;
	}
	else if (High == static_cast<int>(Score4))
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score1 + Score5)/3;
		else if (Low == static_cast<int>(Score1))
			Avg = (Score3 + Score2 + Score5)/3;
		else
			Avg = (Score2 + Score3 + Score1)/3;
	}
	else
	{
		if (Low == static_cast<int>(Score2))
			Avg = (Score3 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score3))
			Avg = (Score2 + Score4 + Score1)/3;
		else if (Low == static_cast<int>(Score4))
			Avg = (Score3 + Score2 + Score1)/3;
		else
			Avg = (Score2 + Score3 + Score4)/3;
	}

	return Avg;
}

int findHighest(float Score1, float Score2, float Score3, float Score4,float Score5)
{
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
			 Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
			 Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
			 Score4 > Score5)
		return Score4;
	else
		return Score5;
}//end findHighest

int findLowest(float Score1, float Score2, float Score3, float Score4, float Score5)
{	
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 && Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 && Score4 < Score5)
		return Score4;
	else
		return Score5;
}//end int findLowest

float calcData(int NumOfDays, float DailyRate, float ServChges, float MedChges){
       return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}
float calcData(float ServChges, float MedChges){
       return ServChges + MedChges;
}

//case '8'
float totalProfitLoss(int nSales)
{
	int nShares;
	
	float PurchPrice, PurchComm, SalePrice, SaleComm, ProfitLoss, Total = 0;

	for (int Sale = 1; Sale <= nSales; Sale++)
	{
		getData(nShares, PurchPrice, PurchComm, SalePrice, SaleComm, Sale);

		ProfitLoss = stockProfitLoss(nShares, PurchPrice, PurchComm, SalePrice, SaleComm);
		Total += ProfitLoss;

		cout << endl;
	}

	return Total;
}


void getData(int &nShares, float &PurchPrice, float &PurchComm, float &SalePrice, float &SaleComm, int Sale)
{
	cout << "Please enter the follow data for stock sale #"
		 << Sale << ":\n";
	cout << "What is the number of shares? ";
	cin  >> nShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
}

float stockProfitLoss(int nShares, float PurchPrice, float PurchComm, float SalePrice, float SaleComm)
{
	return ((nShares * SalePrice) - SaleComm) - ((nShares * PurchPrice) + PurchComm);
}

//case '9'
//case '10'
bool isPrime(int number){
    int i;
    for(i=2; i<number; i++){
        if(number % i == 0){
            return false;
        }//end inner if
    }//end outer if
}//end bool isPrime function



