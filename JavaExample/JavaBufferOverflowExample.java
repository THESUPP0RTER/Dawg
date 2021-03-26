package JavaExample;
public class JavaBufferOverflowExample{
    public static void main(String[] args){
        {
            String importantData = "Government secret files";
            //Buffer has 10 elements
            int[] buffer = new int[10];
            //The loop writes through 15 elements, similar to our password example
            //Input will be 777777777777777
            for (int i =0; i < 15; i++)
              buffer[i] = 7;
        

            //If the buffer overflow attack were to work, then the attacker would be able
            //to get to these print statements, but Java prevents this. 
            System.out.println("Passed Buffer Overflow");
            System.out.println("Government secret files here: "+ importantData);
          }

    }
}