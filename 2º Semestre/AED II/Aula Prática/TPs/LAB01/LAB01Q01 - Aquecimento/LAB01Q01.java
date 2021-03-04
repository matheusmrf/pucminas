import java.util.*; 
class LAB01Q01
{
    /*
        Funções basicas
    */

    public static boolean check_end(String end_text,String end_condition){
        int ct_ok = 0;
        for (int i = 0; i < end_text.length(); i++) {
            if (end_text.charAt(i) == end_condition.charAt(i)){
                ct_ok++;
            }
            else{
                ct_ok = 0;
                break;
            }
          }
        if (ct_ok == end_condition.length()){
            return true;
        }else{
            return false;
        }
        
    }

    public static String[] get_lines(){
        Scanner in = new Scanner(System.in);
        boolean validate_end;
        String text;
        String[] linha = new String[1000];
        int ct_linha = 0;
        List retorno = new ArrayList();
        do{
            text = in.nextLine();
            validate_end = check_end(text,"FIM");
            linha[ct_linha] = text;
            ct_linha++;
        }while (validate_end == false);
        
        return linha;
    }

    /*
        Funções basicas
    */

    public static int count_upper(String text){
        int ct_upper = 0;
        for(int i = 0; i < text.length() ; i++){
            
            if (text.charAt(i) >= 'A' && text.charAt(i) <= 'Z' ){
                ct_upper ++;
            }
        }
        return ct_upper;
    }
    public static void do_normal(String[] input_data){
        for(String linha : input_data){
            if (linha == null || check_end(linha,"FIM")){
                break;
            }else{
                System.out.println(count_upper(linha));
            }
        }
    }

    public static void main(String args[]){
        String[] data = get_lines();
        do_normal(data);

    }


}