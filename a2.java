public class a2 {
    public static void main(String[] args) {
        String a = "pw";
        String b = "skills";
        a.concat(b);
        System.out.println(a);
        String c = new String("pw");
        String d = new String("skills");
        c.concat(d);
        System.out.println(c);
        String e = c.concat(d);
        System.out.println(e);
    }
}