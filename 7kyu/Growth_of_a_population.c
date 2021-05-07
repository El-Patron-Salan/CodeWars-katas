int nbYear(int p0, double percent, int aug, int p) {
        
    double perc = percent / 100;
    int count_years = 0, sum = p0;

    while(sum < p) {
        sum += sum * perc + aug;
        count_years++;
    }
    return count_years;
}
