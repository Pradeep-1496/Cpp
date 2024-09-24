/* Pradeep Prajapati */
/* Problem name or link : FCFS Non-Preemptive */

#include<bits/stdc++.h>

using namespace std;


float avgCT(int CT[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += CT[i];
        }
        return sum;
}
float avgTAT(int TAT[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += TAT[i];
        }
        return sum;
}
float avgWt(int WT[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += WT[i];
        }
        return sum;
}

int wait(int TAT[], int BT[], int WT[], int n){
    for(int i=0; i<n; i++){
        WT[i] = TAT[i] - BT[i];
    }
    return 0;
}

int turn(int CT[], int AT[], int TAT[], int n){
    for(int i=0; i<n; i++){
        TAT[i] = CT[i] - AT[i];
    }
    return 0;
}

int CompT(int AT[], int BT[], int CT[], int n) {
    CT[0] = AT[0] + BT[0];  

    for (int i = 1; i < n; i++) {
        CT[i] = CT[i-1] + BT[i];
    }
    return 0;
}


int main() {

    int n;
    printf("Enter the number of processes: ");
    cin >> n;

    int PO[n], AT[n], BT[n], CT[n], TAT[n], WT[n];
    // string srno[] = {"p1", "p2", "p3", "p4", "p5", "p6"};
    for(int i =0; i<n; i++){

        PO[i] = i+1;

        cout << "Process " << i+1 << " Arrival time: ";
        cin >> AT[i];

        cout << "Process " << i+1 << " Burst time: ";
        cin >> BT[i];
    }

//  sort base on AT
for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
        if(AT[i] > AT[j]){

            int temp = AT[i];
            AT[i] = AT[j];
            AT[j] = temp;

            temp = BT[i];
            BT[i] = BT[j];
            BT[j] = temp;

            temp = PO[i];
            PO[i] = PO[j];
            PO[j] = temp;

        }
    }
}


    CompT(AT, BT, CT, n);
    turn(CT, AT, TAT, n);
    wait(TAT, BT, WT, n);

// Sort base on PO;


for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
        if(PO[i] > PO[j]){
            int temp = PO[i];
            PO[i] = PO[j];
            PO[j] = temp;

            temp = AT[i];
            AT[i] = AT[j];
            AT[j] = temp;

            temp = BT[i];
            BT[i] = BT[j];
            BT[j] = temp;
            
            temp = CT[i];
            CT[i] = CT[j];
            CT[j] = temp;

            temp = TAT[i];
            TAT[i] = TAT[j];
            TAT[j] = temp;

            temp = WT[i];
            WT[i] = WT[j];
            WT[j] = temp;
        }
    }
}

    cout << "srno" << "    " << "AT" << "     " << "BT" << "     " << "CT" <<"      " << "TAT" << "       " << "WT" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << setfill('P') << setw(2) << i+1 << "     " << setfill('0') << setw(2) << AT[i] << "     " << setfill('0') << setw(2) << BT[i] << "     " << setfill('0') << setw(2) << CT[i] <<"      " << setfill('0') << setw(2) << TAT[i] << "        " << setfill('0') << setw(2) << WT[i] << endl;
    }
    cout << "Average Complition time : " << avgCT(CT, n)/n << endl;
    cout << "Average Waiting time : " << avgWt(WT, n)/n << endl;
    cout << "Average Turn arouund time : " << avgTAT(TAT, n)/n;
    return 0;
}