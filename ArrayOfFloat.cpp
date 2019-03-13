#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class ArrayOfFloat {
private:
    float *array;
    int size;

public:
    ArrayOfFloat(int x) {
        array = new float[x];
        size = x;
    }

    ~ArrayOfFloat() {
        delete array;
    }

    void addValueAtIndex(int i, float value) {
        if (i < 0 || i > (size - 1))
            cout << "Value cannot be inserted" << endl;
        else
            array[i] = value;
    }

    float getValueAtIndex(int i) {
        if(i < 0 || i > (size - 1))
            cout << "Value cannot be retrieved" << endl;
        else
            return array[i];
    }

    float getMax() {
        float max = array[0];

        for(int i=1; i < size ; i++) {
            if(array[i] > max)
                max = array[i];
        }

        return max;
    }

    float getMin() {
        float min = array[0];

        for(int i = 1; i < size; i++) {
            if(array[i] < min)
                min = array[i];
        }

        return min;
    }

    float getAverage() {
        float sum = 0;

        for(int i = 0; i < size; i++)
            sum += array[i];

        return sum / size;
    }
};

int main()
{
    int length;
    cout << "Enter size of the array: ";
    cin >> length;
    ArrayOfFloat array(length);

    for(int i = 0; i < length; i++) {
        float value;
        cout << "Enter value to add to array in index " << i << ": ";
        cin >> value;
        array.addValueAtIndex(i, value);
    }

    cout << "Get value at index 2: " << array.getValueAtIndex(2) << endl;
    cout << "Max value in array: " << array.getMax() << endl;
    cout << "Min value in array: " << array.getMin() << endl;
    cout << "Average value of array: " << array.getAverage() << endl;

    return 0;
}