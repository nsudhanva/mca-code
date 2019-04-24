class Name {

    public String capitalize(String name){
        String str = name.substring(0, 1).toUpperCase() + name.substring(1);
        return str;
    }
}

class Cap {
    public static void main(String args[]) {

        Name n = new Name();
        System.out.println(n.capitalize("katti"));
    }
}