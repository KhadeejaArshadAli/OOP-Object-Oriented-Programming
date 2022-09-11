#include <iostream>
using namespace std;

class matrix
{
public:
    int height, width;
    double **arrayptr;
    double f[10][10];
    virtual double getElement(int i, int j) = 0;
    virtual double setElement(int i, int j, double value) = 0;
    virtual matrix &add(matrix &m) = 0;
    virtual matrix &multiply(matrix &m) = 0; // in virtual we cant make object of matrix so we use & to make it pointer
    virtual void accept()=0;
    

};

class matrix2dArray : public matrix
{
    double **arrayptr;
    
    int min(int a, int b)
    {
        int imp = (a < b) ? a : b;
        return imp;
        // return (a < b) ? a : b;
    }

public:
    int height, width;
    void accept(){
double  **arrayptr = new double*[10];
for(int i=0;i<10;i++)
  {
    arrayptr[i] = &f[i][0];
}


    for (int i=0 ; i<width ; i++)
{
     for (int j=0 ; j<height ; j++)
{
    cout<<"Enter element :";
    cin>>arrayptr [i][j]; 
  }
    }
 for(int i=0; i<width; i++)
        {
                for(int j=0; j<height; j++)
                {
                        cout<<" "<<arrayptr[i][j]<<" ";
                }
                cout<<"\n";
        }
    }

    matrix2dArray operator=(const matrix &m)
    {
        matrix2dArray temp(m.height, m.width);
        temp.arrayptr = m.arrayptr;
        return temp;
    }
    matrix2dArray(int height, int width)
    {
        this->height = height;
        this->width = width;
        arrayptr = new double *[height];
        arrayptr[height - 1] = new double[height * width];
    }
    ~matrix2dArray()
    {
        for (int i = 0; i < height; i++)
        {
            delete[] arrayptr[i];
        }
        delete[] arrayptr;
    }

    double getElement(int i, int j)
    {
        return arrayptr[i][j];
    }
    double setElement(int i, int j, double value)
    {
        arrayptr[i][j] = value;
        return value;
    }
    matrix &add(matrix &m)
    {   
    

        if (height != this->height || width != this->width)
        {
            cout << "Error: cannot add matrix of different size" << endl;
            return *this;
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                arrayptr[i][j]=arrayptr[i][j] + m.arrayptr[i][j];
            }
        }
        return *this;
    }
    matrix &multiply(matrix &m)
    {

        if (width != m.height)
        {
            cout << "Error: cannot multiply matrix of different size" << endl;
            return *this;
        }
        double **temp = new double *[height];
        temp[0] = new double[height * m.width];
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                temp[i][j] = 0;
                for (int k = 0; k < height; k++)
                {
                    temp[i][j] += arrayptr[i][k] * m.getElement(k, j);
                }
            }
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < m.width; j++)
            {
                arrayptr[i][j] = temp[i][j];
            }
        }
        return *this;
    }
    string toString(matrix2dArray other){
    string s=" ";
    double  **arrayptr = new double*[10];
for(int i=0;i<10;i++)
  {
    other.arrayptr[i] = &f[i][0];
}

    
       
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                s += to_string(other.arrayptr[i][j])+" ";
            }
            
        }
        return s;
   
}
};

// matrixlin is hierarchial inheritance
class matrixlin
{
protected:
    int min(int a, int b)
    {
        int imp = (a < b) ? a : b;
        return imp;
        // return (a < b) ? a : b;
    }
    double *arrayptr;
    int height;
    int width;

public:
    matrix2dArray delinearize()
    {
        matrix2dArray m(height, width);
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                m.setElement(i, j, arrayptr[i * width + j]);
            }
        }
        return m;
    }
    void accept(){
        double f[10][10]={};
double  **t = new double*[10];
for(int i=0;i<10;i++)
  {
    t[i] = &f[i][0];
}


    for (int i=0 ; i<width ; i++)
{
     for (int j=0 ; j<height ; j++)
{
    cout<<"Enter element :";
    cin>>t [i][j]; 
  }
    }
 for(int i=0; i<width; i++)
        {
                for(int j=0; j<height; j++)
                {
                        cout<<" "<<t[i][j]<<" ";
                }
                cout<<"\n";
        }
    }
};

class matrixRow : public matrixlin
{
private:
    int min(int a, int b)
    {
        return (a < b) ? a : b;
    }

public:
    matrixRow(int height, int width)
    {
        arrayptr = new double[height * width];
    }
    double getElement(int i, int j)
    {
        return arrayptr[i * width + j];
    }
    double setElement(int i, int j, double value)
    {
        arrayptr[i * width + j] = value;
        return value; // return value to make it pointer
    }
    matrixRow &add(matrix &m)
    {
        if (height != m.height || width != m.width)
        {
            cout << "Error: cannot add matrix of different size" << endl;
            return *this; // return this to make it pointer
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                arrayptr[i * width + j] += m.getElement(i, j);
            }
        }
        return *this;
    }
    matrixRow &multiply(matrix &m)
    {
        if (width != m.height)
        {
            cout << "Error: cannot multiply matrix of different size" << endl;
            return *this;
        }
        double *temp = new double[height * m.width];
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < m.width; j++)
            {
                temp[i * m.width + j] = 0;
                for (int k = 0; k < width; k++)
                {
                    temp[i * m.width + j] += arrayptr[i * width + k] * m.getElement(k, j);
                }
            }
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < m.width; j++)
            {
                arrayptr[i * m.width + j] = temp[i * m.width + j];
            }
        }
        return *this;
    }
    

    
    string toString()
    {
        string s ="";
         double a[10][10]={};
      double  **arrayptr = new double*[10];
      for(int i=0;i<10;i++)
      {
        arrayptr[i] = &a[i][0];
      }

       

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                s += to_string(arrayptr[i][j]);
            }
           
        
        }
        return s;
    }
    matrix2dArray delinearize()
    {
        matrix2dArray m(height, width);
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                m.setElement(i, j, arrayptr[i * width + j]);
            }
        }
        return m;
    }
};

class matrixCol : public matrixlin
{
public:
    matrixCol(int height, int width)
    {
        arrayptr = new double[height * width];
    }
    double getElement(int i, int j)
    {
        return arrayptr[i * width + j];
    }
    double setElement(int i, int j, double value)
    {
        arrayptr[i * width + j] = value;
        return value;
    }
    matrixCol &add(matrix &m)
    {
        if (height != m.height || width != m.width)
        {
            cout << "Error: cannot add matrix of different size" << endl;
            return *this;
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                arrayptr[i * width + j] += m.getElement(i, j);
            }
        }
        return *this;
    }
    matrixCol &multiply(matrix &m)
    {
        if (width != m.height)
        {
            cout << "Error: cannot multiply matrix of different size" << endl;
            return *this;
        }
        double *temp = new double[height * m.width];
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < m.width; j++)
            {
                temp[i * m.width + j] = 0;
                for (int k = 0; k < width; k++)
                {
                    temp[i * m.width + j] += arrayptr[i * width + k] * m.getElement(k, j);
                }
            }
        }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < m.width; j++)
            {
                arrayptr[i * m.width + j] = temp[i * m.width + j];
            }
        }
        return *this;
    }
    string toString()
    {
        string s = "";
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                s += to_string(arrayptr[i * width + j]) + " ";
            }
            s += "\n";
        }
        return s;
    }
    matrix2dArray delinearize()
    {
        matrix2dArray m(height, width);
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                m.setElement(i, j, arrayptr[i * width + j]);
            }
        }
        return m;
    }
};

int main()
{
    matrix *M1;
    matrix2dArray M2(2, 2);
    M1=&M2;
    M1->accept();
   cout<< M1->setElement(0, 0, 1)<<endl;
    cout<<M1->setElement(0, 1, 2)<<endl;
   cout<< M1->setElement(1, 0, 3)<<endl;
    cout<<M1->setElement(1, 1, 4)<<endl;

   matrix2dArray M4(2, 2);
   M4.accept();
  cout<< M4.toString(M4)<<endl;
   //cout<< M4.setElement(0, 0, 1);
    //cout<<M4.setElement(0, 1, 2);
    //cout<<M4.setElement(1, 0, 3);
    //cout<<M4.setElement(1, 1, 4);
  //cout<<  M4.toString(M4)<<endl;
   
  M4.add(*M1);
  cout<<M4.toString(M4)<<endl;

  //matrix2dArray m7(2,2);
  //cout<<  (M4)<<endl;
  
    
    //M1->add(M4);
    
   
    //matrixlin m6;
    //m6.accept();
    //m6.delinearize();
     //M1->add(M4);


   // cout << M4.toString() << endl;
    return 0;
}