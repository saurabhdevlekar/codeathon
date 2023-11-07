
package corejavatest;
import java.util.*;
import java.time.LocalDate;
import java.util.Scanner;


class student{
    public String name;
    public int prnNo;

    public student(String name, int prnNo) {
        this.name = name;
        this.prnNo = prnNo;
    }   
    
   
}
class trainer extends student{
    public String tname;

    public trainer(String tname, String name, int prnNo) {
        super(name, prnNo);
        this.tname = tname;
    }

  

   
} 
class Assigment extends trainer{
    public String title;
    public String date;
    public String discription;
    public String Assignment;
    
     private student s;
        private trainer t;

    public Assigment(String title, String date, String discription, String Assignment, String tname, String name, int prnNo) {
        super(tname, name, prnNo);
        this.title = title;
        this.date = date;
        this.discription = discription;
        this.Assignment = Assignment;
        
      
    }
    public String getTitle(String title){
        return title;
    }
    public String getdate(String date){
        return date;
    }
    public String getdiscription(String discription){
        return discription;
    }
    public String getAssignment(String Assignment){
        return Assignment;
    }
}
public class AssignmentManager {
       void createAssignment(){
         Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter a title");
        String t = sc.nextLine();
        
        LocalDate date = LocalDate.now();
        
        System.out.println("Enter a description");
        String desc = sc.nextLine();
        

        System.out.println("Enter assignee name");
        String assign = sc.nextLine();

        System.out.println("Title " + t);
        System.out.println("date is  " + date);
        System.out.println("Description " + desc);
        System.out.println("Assignee name   " + assign);
       }
       void addAssignment(){
           Scanner sc = new Scanner(System.in);
           
           ArrayList<String> ls=new ArrayList<>();
          ls.add("assignment1");
           ls.add("assignment2");
            ls.add("assignment3");
             ls.add("assignment4");
              ls.add("assignment5");
              System.out.println(ls);
              
          
           
       }
       void showAssignment(){
            System.out.println("Showing details");
       }
       void saveAssignment(){
           
       }
       void loadAssignment(){
           
       }
       void chkAssignment(){
           
       }
  
    public static void main(String[] args) {
       AssignmentManager am = new AssignmentManager();
        Scanner sc = new Scanner(System.in);
        System.out.println("1.create Assignment\n  "
                         + "2.Add Assignment\n "
                         + "3.Save Assignment\n "
                         + "4.LoadAssignment");
        System.out.println("Enter any one option ");
         System.out.println("####################################");
        int n = sc.nextInt();

        switch (n) {
            case 1:
                am.createAssignment();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                System.out.println("please enter the number between 1 to 4");
        
    }
    
}
}
