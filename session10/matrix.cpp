//
// Created by Connor DePalma on 4/2/18.
//




class Matrix{
public:
    Matrix(int rows, int cols){}
    ~Matrix(){}


    Matrix(const Matrix& orig){

    }

    Matrix&operator = (const Matrix& orig){
    }

    //MOVE constructor
    Matrix(Matrix&& orig){ // for c = a+ b means temps
        data = orig.data;
        orig.data = nullptr;
        rows = orig.rows;
        cols = orig.cols;
    }
};





int main(){

    Matrix a(3,4);
    Matrix b(3,4);
    Matrix c = a+b;

}