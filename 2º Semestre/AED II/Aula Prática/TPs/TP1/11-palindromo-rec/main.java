public class main {

    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }
    public static void main(String[]args){
        String teste;
        teste  = MyIO.readLine();
            do {
                boolean verifyresultado = isPoli(teste);
                if (verifyresultado) System.out.println("SIM");
                else System.out.println("NAO");
            teste = MyIO.readLine();
    
    
            } while(isFim(teste) == false);
    }

    public static boolean isPoli(String s) {
        return ehPalindromo(s, 0, s.length() - 1);
    }

    public static boolean isPoli(String s, int i, int f) {
        boolean resp;
        if (i < (f / 2)) {
            resp = true;
        }

        if (s.charAt(i) != s.charAt(f)) {

            return resp = false;
        } else {
            if (i >= (s.length() - 1))
                return true;
            resp = ehPalindromo(s, i + 1, f - 1);

        }

        return resp;
    }
}