import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
        int idadeMonica, idadeF1, idadeF2, idadeF3;
        int cont=0;
        do {
            idadeMonica = scan.nextInt();
            if (idadeMonica==0) break;
            idadeF1 = scan.nextInt();
            idadeF2 = scan.nextInt();

            idadeF3 = idadeMonica - (idadeF1 + idadeF2);
            System.out.println(idadeF3);

            cont++;

        }while(cont<55);
    }
}
