import java.io.BufferedReader;
import java.io.FileReader;

class Read {
    public static void main(String[] args) throws Exception {
        String line;
        BufferedReader reader = new BufferedReader(new FileReader("input.txt"));
        while ((line = reader.readLine()) != null)
        {
        System.out.println(line);
        }
    reader.close();
        
    
}
}
