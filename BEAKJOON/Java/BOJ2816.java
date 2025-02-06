import java.io.*;

public class BOJ2816 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
       
        int n = Integer.parseInt(br.readLine());
        int i = 0;
        int j = 0;
        String temp = " ";
        String[] chList = new String[n];

        for (int k=0;k<n;k++){
            chList[k] = br.readLine();
        }
        while(!chList[0].equals("KBS1")){
            if(!chList[i].equals("KBS1")){
                bw.write("1");
                i++;
            }else{
                bw.write("4");
                temp = chList[i];
                chList[i] = chList[i-1];
                chList[i-1] = temp;
                i--;
            }
        }
        while(!chList[1].equals("KBS2")){
            if(!chList[j].equals("KBS2")){
                bw.write("1");
                j++;
            }else{
                bw.write("4");
                temp = chList[j];
                chList[j] = chList[j-1];
                chList[j-1] = temp;
                j--;
            }
        }
        
        bw.flush();
        bw.close();
        br.close();
    }

}
