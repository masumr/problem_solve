int LisNlogK()   // which runs the NlogK LIS algorithm
{
    int i; // auxilary variable for iteration
    I[0] = -inf; // I[0] = -infinite
    for( i = 1; i <= n; i++ ) // observe that i <= n are given
        I[i] = inf; // I[1 to n] = infinite
    int LisLength = 0; // keeps the maximum position where a data is inserted
    for( i = 0; i < n; i++ )   // iterate left to right
    {
        int low, high, mid; // variables to perform binary search
        low = 0; // minimum position where we to put data in I[]
        high = LisLength; // the maximum position
        while( low <= high )   // binary search to find the correct position
        {
            mid = ( low + high ) / 2;
            if( I[mid] < Sequence[i] )
                low = mid + 1;
            else
                high = mid - 1;
        }
// observe the binary search carefully, when the binary search ends
// low > high and we put our item in I[low]
        I[low] = Sequence[i];
        if( LisLength < low ) // LisLength contains the maximum position
            LisLength = low;
    }
    return LisLength; // return the result
}
