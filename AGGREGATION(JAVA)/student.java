public class student {
    String name;
    String bookname;

    public student() {
    }

    public student(String name, String Bookname) {
        this.name = name;
        this.bookname = Bookname;

    }

    public student(student diffrent) {
        name = diffrent.name;
        bookname = diffrent.bookname;

    }

}