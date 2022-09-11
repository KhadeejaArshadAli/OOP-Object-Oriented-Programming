public class libarary {

    String name;
    String address;
    String floor;
    String room;
    student Student;

    public libarary() {

    }

    public libarary(String Name, String Address, String Floor, String Room, student Student) {
        this.name = Name;
        this.address = Address;
        this.floor = Floor;
        this.room = Room;
        this.Student = Student;
    }

    public libarary(libarary change) {
        name = change.name;
        address = change.address;
        floor = change.floor;
        room = change.room;
        Student = change.Student;

    }

    public void show() {
        System.out.println(
                "details of libarary are :" + "\n" + "name of libarary is:" + name + "\n" + "address of libarary is:"
                        + address + "\n" + "libarary is on :" + floor + "\n" + "libarary is at room number:" + room);

        System.out.println("name of student is:" + Student.name + "\n" + "name of book issued is:" + Student.bookname);
    }

}
