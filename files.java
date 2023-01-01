import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
  
class files {

    public static void main(String[] args)
    {
 
        try {
  
            FileReader fr = new FileReader("/Users/astrochuchaa/Desktop/Vs_Code/input.txt");
            FileWriter fw = new FileWriter("/Users/astrochuchaa/Desktop/Vs_Code/output.txt");
  

            String str = "";
  
            int i;
  
            while ((i = fr.read()) != -1) {

                str += (char)i;
            }

            System.out.println(str);

            fw.write(str);
            fr.close();
            fw.close();
  
            System.out.println("File reading and writing completed");
        }
 
        catch (IOException e) {
 
            System.out.println("Exception caught"+ e);
        }
    }
}