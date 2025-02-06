import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Calendar;

public class BOJ10699 {
    public static void main(String[] args) throws IOException {

        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");

        Calendar c = Calendar.getInstance();

        String today = sdf.format(c.getTime());

        System.out.println(today);
    }
}
