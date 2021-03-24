class DoubleVector
{
public:
    DoubleVector(int size);
    ~DoubleVector();
    double& at(int index);
    int size();
    void resize(int newSize);
    void push_back(double value);

private:
    double* data_;
    int size_;
};

void print(DoubleVector& v);

void userInput(DoubleVector& v);

double dotProduct(DoubleVector& v1, DoubleVector& v2);