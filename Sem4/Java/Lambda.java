interface Cap {
    String capitalize(String name);
}

interface Even {
    boolean isEven(int a);
}

interface Fact{
    int fact(int n);
}

class Lambda {
    public static void main(String args[]){
        Cap capti = (String name) -> (
            name.substring(0, 1).toUpperCase() + name.substring(1)
        );

        System.out.println(capti.capitalize("Katti"));

        Even e = (int a) -> (a % 2 == 0);

        System.out.println(e.isEven(10));
        
        Fact f = (int n) -> (
            int k = 1;
            for(int i = 1; i <= n; i++){
                k = k*i;
            }
        );
            System.out.println(f.fact(5));
    }
}

// Find the factorial of a number using Lambda functions

// 1. Define Interface
// 2. InterfaceName lambdaFunctionName = 
// (Arguments) -> (Definition)