#include <iostream>
#include <vector>


//INSERTION SORT
void insertionSort(std::vector<int>& integers){
    for(int i = 1; i < integers.size(); ++i){
        int j = i;
        while(j > 0 && integers[j-1]>integers[j]){
            int temp = integers[j];
            integers[j]=integers[j-1];
            integers[j-1]=temp;
            --j;
        }

    }
}


//BUBBLE SORT
void bubbleSort(std::vector<int>& integers){
    for(int i = 1; i < integers.size();++i) {
        for (int j = 1; j < integers.size(); ++j) {
            if (integers[j - 1] > integers[j]) {
                int temp = integers[j];
                integers[j] = integers[j - 1];
                integers[j - 1] = temp;
            }

        }
    }
}

int main(){
    std::vector<int> toInsertionSort{27,89,12,66,74,1,33};
    std::vector<int> toBubbleSort{78,9,62,88,23,90,45};
    insertionSort(toInsertionSort);
    bubbleSort(toBubbleSort);
    std::cout<<"Insertion Sort: "<<std::endl;
    for(int v : toInsertionSort){
        std::cout<<v<<std::endl;
    }
    std::cout<<"Bubble Sort: "<<std::endl;
    for(int v : toBubbleSort){
        std::cout<<v<<std::endl;
    }




}