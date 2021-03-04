import java.util.*; 
class LAB01Q02
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
        System.out.println(ct_upper);
        return ct_upper;
    }
    public static void do_normal(String[] input_data,int ct_control){
        //Essa função vai percorrer o vetor, até o final, e realizar a chamada, para a função que irá contar a quantidade de caracteres maiusculos
        int output;
        if (input_data[ct_control] == null || check_end(input_data[ct_control],"FIM")){
            output = 0;
        }else{
            output = count_upper(input_data[ct_control]);
            do_normal(input_data,++ct_control);
        }
        //String a = output.toString();
        //System.out.println(a);
    }

    public static void main(String args[]){
        String[] data = get_lines();
        do_normal(data,0);

    }


}