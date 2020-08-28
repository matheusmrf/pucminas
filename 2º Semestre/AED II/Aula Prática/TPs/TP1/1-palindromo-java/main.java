public class main {

    public static boolean isPoli(String palavra){
        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.charAt(i) != palavra.charAt(palavra.length()-1 - i)) {
                return false;
            }
        }
        return true;
    }

public static boolean isFim(String s){
	return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
}

    public static void main(String[] args) {
        String teste;
	teste  = MyIO.readLine();
        do {
            boolean verifyresultado = isPoli(teste);
            if (verifyresultado) System.out.println("SIM");
            else System.out.println("NAO");
	    teste = MyIO.readLine();


        } while(isFim(teste) == false);

    }

}

