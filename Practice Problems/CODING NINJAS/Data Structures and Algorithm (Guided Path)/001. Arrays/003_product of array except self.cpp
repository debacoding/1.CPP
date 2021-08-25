int *getProductArrayExceptSelf(int *arr, int n)
{
    //Write your code here
    // Store the product of all the elements is a variable and then iterate the array 
    // and add product/current_index_value in a new array. and then return this new array.
    int prod = 1;
    int flag = 0;
  
    // product of all elements
    for (int i = 0; i < n; i++) {
  
        // counting number of elements
        // which have value
        // 0
        if (arr[i] == 0)
            flag++;
        else
            prod *= arr[i];
    }
  
    // creating a new array of size n
    int* newArr = new int[n];
  
    for (int i = 0; i < n; i++) {
  
        // if number of elements in
        // array with value 0
        // is more than 1 than each
        // value in new array
        // will be equal to 0
        if (flag > 1) {
            newArr[i] = 0;
        }
  
        // if no element having value
        // 0 than we will
        // insert product/a[i] in new array
        else if (flag == 0)
            newArr[i] = (prod / arr[i]);
  
        // if 1 element of array having
        // value 0 then all
        // the elements except that index
        // value , will be
        // equal to 0
        else if (flag == 1 && arr[i] != 0) {
            newArr[i] = 0;
        }
  
        // if(flag == 1 && a[i] == 0)
        else
            newArr[i] = prod;
    }
    return newArr;
}
