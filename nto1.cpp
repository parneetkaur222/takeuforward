class Solution {
  public:
    void printNumbers(int n) {
      if (n ==0) return;
      cout<<n<<endl;
      printNumbers(n-1);
    }
    int main (){
      int n;
      cin>> n;
      printNumbers(n);
      return 0;

    }
        // Your code goes here
    };
