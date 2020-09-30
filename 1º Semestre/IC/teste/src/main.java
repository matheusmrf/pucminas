import java.util.Scanner;

public class main {

    public static boolean isPoli(String palavra){
        for (int i = 0; i < palavra.length(); i++) {
            if (palavra.charAt(i) != palavra.charAt(palavra.length()-1 - i)) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        String teste;
        do {
            teste = i.nextLine().toLowerCase();
            if(teste.equals("fim")) break;
            boolean verifyresultado = isPoli(teste);
            if (verifyresultado) System.out.println("SIM");
            else System.out.println("NAO");


        } while (!teste.equals("fim"));

    }
}
