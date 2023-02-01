package mypack;

public class Student_4 {
    private int id;
    private String name;
    public Student_4(int id, String name) {
        this.id = id;
        this.name = name;
    }
    public int getId() {
        return id;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
    @Override
    public boolean equals(Object a)
    {
        return this.id == ((Student_4)a).getId();
    }
}
