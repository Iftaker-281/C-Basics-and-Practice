int s[] = {4,7,9,3,19,74,21,22,34};
int n = 9;
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<n-1 ; j++){
        if(s[j] > s[j+1]){
            int temp = s[j];
            s[j] = s[j+1];
            s[j+1] = temp;
        }
    }
}
