//quadratic formula
//Made by Qutaibah Wahbeh
//Using: CPP
#include <iostream>
#include <cmath>
using namespace std;
void loop(){
    double a,b,c,i1,i2, i3;
    cout << "\n\nEnter A: ";
    cin >> a;
    cout << "\nEnter B: ";
    cin >> b;
    cout << "\nEnter C: ";
    cin >> c;
    // (-(b) +- √b^2 - 4ac ) / 2*a
    double disc;
    disc = pow(b,2) - 4*a*c;

    double sqrtdisc;
    sqrtdisc = sqrt(disc);

    if (sqrtdisc == 0){
        
                                            double b1;
                                            b1 = -b;

                                            double a1;
                                            a1 = 2*a;

                                            double notlast, notlast2;
                                            notlast = b1 + sqrtdisc;
                                            notlast2 = b1 - sqrtdisc;

                                            double final, final2;
                                            final = notlast / a1;
                                            final2 = notlast2 / a1;
                                            
                                            cout << "\n1 solution\n";
                                            cout << "\n\nAnswer: ";
                                            cout << final;
                                            }

    else if (sqrtdisc > 0){


        double b1;
        b1 = -b;

        double a1;
        a1 = 2*a;

        double notlast, notlast2;
        notlast = b1 + sqrtdisc;
        notlast2 = b1 - sqrtdisc;

        double final, final2;
        final = notlast / a1;
        final2 = notlast2 / a1;

        cout << "\n2 solutions\n";
        cout << "\n\nAnswer / x axis 1) : ";
        cout << final;
        cout << "\nor\n";
        cout << "Answer / x axis 2) : ";
        cout << final2;
        cout << "\n\n";
    }
    else if (sqrtdisc < 0){
        cout << "\n\nimaginary nums used:\n\n";
        i1 = sqrtdisc * -1;
        i2 = sqrt(i1);

        double b1;
        b1 = -b;

        double a1;
        a1 = 2*a;

        double notlast, notlast2;
        notlast = b1 + i2;
        notlast2 = b1 - i2;

        double final, final2;
        final = notlast / a1;
        final2 = notlast2 / a1;

        cout << "\n2 solutions\n";
        cout << "\n\nAnswer / x axis 1) : ";
        cout << final;
        cout << "i";
        cout << "\nor\n";
        cout << "Answer / x axis 2) : ";
        cout << final2;
        cout << "i";
        cout << "\n\n";
        

    }
    else {
        cout << "\n\nNo Solutions\n\n";
    }
    cout << "\n\nY axis: ";
    cout << c;
    
    

    cout << "\n\n\nBuilt by: Qutaibah\nBuilt using cpp\n\n\n";
    loop();
}
int main(){
    double a,b,c,i1,i2, i3;
    cout << "\n\nEnter A: ";
    cin >> a;
    cout << "\nEnter B: ";
    cin >> b;
    cout << "\nEnter C: ";
    cin >> c;
    // (-(b) +- √b^2 - 4ac ) / 2*a
    double disc;
    disc = pow(b,2) - 4*a*c;

    double sqrtdisc;
    sqrtdisc = sqrt(disc);

    if (sqrtdisc == 0){
        
                                            double b1;
                                            b1 = -b;

                                            double a1;
                                            a1 = 2*a;

                                            double notlast, notlast2;
                                            notlast = b1 + sqrtdisc;
                                            notlast2 = b1 - sqrtdisc;

                                            double final, final2;
                                            final = notlast / a1;
                                            final2 = notlast2 / a1;
                                            
                                            cout << "\n1 solution\n";
                                            cout << "\n\nAnswer: ";
                                            cout << final;
                                            }

    else if (sqrtdisc > 0){


        double b1;
        b1 = -b;

        double a1;
        a1 = 2*a;

        double notlast, notlast2;
        notlast = b1 + sqrtdisc;
        notlast2 = b1 - sqrtdisc;

        double final, final2;
        final = notlast / a1;
        final2 = notlast2 / a1;

        cout << "\n2 solutions\n";
        cout << "\n\nAnswer / x axis 1) : ";
        cout << final;
        cout << "\nor\n";
        cout << "Answer / x axis 2) : ";
        cout << final2;
        cout << "\n\n";
    }
    else if (sqrtdisc < 0){
        cout << "\n\nimaginary nums used:\n\n";
        i1 = sqrtdisc * -1;
        i2 = sqrt(i1);

        double b1;
        b1 = -b;

        double a1;
        a1 = 2*a;

        double notlast, notlast2;
        notlast = b1 + i2;
        notlast2 = b1 - i2;

        double final, final2;
        final = notlast / a1;
        final2 = notlast2 / a1;

        cout << "\n2 solutions\n";
        cout << "\n\nAnswer / x axis 1) : ";
        cout << final;
        cout << "i";
        cout << "\nor\n";
        cout << "Answer / x axis 2) : ";
        cout << final2;
        cout << "i";
        cout << "\n\n";
        

    }
    else {
        cout << "\n\nNo Solutions\n\n";
    }
    cout << "\n\nY axis: ";
    cout << c;
    
    

    cout << "\n\n\nBuilt by: Qutaibah\nBuilt using cpp\n\n\n";
    loop();
    return 0;

}

