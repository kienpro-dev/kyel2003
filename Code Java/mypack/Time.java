package mypack;

public class Time {
    private int hour;
    private int minute;
    private int second;

    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public void setTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public int getHour() {
        return hour;
    }

    public int getMinute() {
        return minute;
    }

    public int getSecond() {
        return second;
    }

    public void nextSecond() {
        setSecond(second + 1);
        if (second == 60) {
            setSecond(0);
            setMinute(minute + 1);
            if (minute == 60) {
                setMinute(0);
                setHour(hour + 1);
                if (hour == 24) {
                    setHour(0);
                }

            }

        }
    }

    public void previousSecond() {
        setSecond(second - 1);
        if (second == -1) {
            setSecond(59);
            setMinute(minute - 1);
            if (minute == -1) {
                setMinute(59);
                setHour(hour - 1);
                if (hour == -1) {
                    setHour(23);
                }

            }
        }
    }

    public void display() {
        System.out.println((hour < 10 ? ("0" + hour) : hour) + ":" + (minute < 10 ? ("0" + minute) : minute) + ":" + (second < 10 ? ("0" + second) : second));
    }
}
