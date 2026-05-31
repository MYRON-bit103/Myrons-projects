float cos(float x, int n) {
    if (n <= 0) {
        return 0;
    }

    float sum = 0;
    int sign = 1;
    float numerator = 1;      // Starts at 1
    float denominator = 1;    // Starts at 1

    for (int k = 0; k < n; k++) {
                                     // Adds the current term
        sum = sum + sign * numerator / denominator;//given equation

                                                    // Prepare values for the NEXT loop
        sign = -sign;                               // Flips the sign
        numerator = numerator * x * x;              // Increases exponent by 2
        
        
        denominator = denominator * (2 * k + 1) * (2 * k + 2);
    }

    return sum;
}
