#include <iostream>
#include <fstream>
#include <string>
#define MAX_SIZE 100
#define length 3

void read_me(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE], int &size, const std::string &filename);
void print_matrix1(int maxtrix1[MAX_SIZE][MAX_SIZE], int size);
void print_matrix2(int maxtrix2[MAX_SIZE][MAX_SIZE], int size);
void sum(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]);
void product(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]);
void difference(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]);
int main(){

    int maxtrix1[MAX_SIZE][MAX_SIZE];
    int maxtrix2[MAX_SIZE][MAX_SIZE];
    int size;
    std::ifstream input;
    std::string filename;
    std::cout <<"Enter a file name: ";
    std::cin >> filename;
    read_me(maxtrix1, maxtrix2, size, filename);
    std::cout << "              \n";
    std::cout <<"Humza Qureshi\n";
    std::cout << "Lab #6: Matrix manipulation\n";
    std::cout << "              \n";
    std::cout <<"Matrix A:\n";
    print_matrix1(maxtrix1, size);
    std::cout << "              \n";
    std::cout <<"Matrix B:\n";
    std::cout << "              \n";
    print_matrix2(maxtrix2, size);
    std::cout << "              \n";
    std::cout << "Matrix Sum (A+B): \n";
    sum(maxtrix1, maxtrix2);
    std::cout << "              \n";
    std::cout <<"Matrix Product(A*B): \n";
    product(maxtrix1, maxtrix2);
    std::cout << "              \n";
    std::cout <<"Matrix Difference(A-B): \n";
    difference(maxtrix1, maxtrix2);


    return 0;
}

void read_me(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE], int &size, const std::string &filename) {
    std::ifstream MyFile(filename);

    if (!MyFile){
       std::cerr << "Error opening file: " << filename;
        exit(1);
    }

    MyFile >> size;
    int lines = 0;

    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            MyFile >> maxtrix1[i][j];
        }
    }
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            MyFile >> maxtrix2[i][j];
        }
    }
    MyFile.close();
        
}

void print_matrix1(int maxtrix1[MAX_SIZE][MAX_SIZE], int size){

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            std::cout << maxtrix1[i][j]<< " ";
        }
        std::cout << std::endl;
    }
}

void print_matrix2(int maxtrix2[MAX_SIZE][MAX_SIZE], int size){
     for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            std::cout << maxtrix2[i][j]<< " ";
        }
        std::cout << std::endl;
    }

}

void sum(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]){
    int result[MAX_SIZE][MAX_SIZE] = {{0,0,0}, {0,0,0}, {0,0,0}};

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            result[i][j] = (int)maxtrix1[i][j] + (int)maxtrix2[i][j];

        }
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            std::cout <<result[i][j]<< " ";
        }
        std::cout <<std::endl;
    }


}

void product(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]){
    int result[MAX_SIZE][MAX_SIZE] = {{0,0,0}, {0,0,0}, {0,0,0}};
      for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            for (int k = 0; k < length; k++) {
                result[i][j] += maxtrix1[i][k] * maxtrix2[k][j];
            }
        }
    }

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            std::cout <<result[i][j]<< " ";
        }
        std::cout <<std::endl;
    }

    
}

void difference(int maxtrix1[MAX_SIZE][MAX_SIZE], int maxtrix2[MAX_SIZE][MAX_SIZE]){
    int result[MAX_SIZE][MAX_SIZE] = {{0,0,0}, {0,0,0}, {0,0,0}};

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            result[i][j] = (int)maxtrix1[i][j] - (int)maxtrix2[i][j];

        }
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            std::cout <<result[i][j]<< " ";
        }
        std::cout <<std::endl;
    }



    
}


