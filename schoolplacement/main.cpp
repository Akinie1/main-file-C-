#include "autoInclude.h"
int main()
{
   Welcome welcome;








        Course *courserecord = new Course(0,"",0,0,0);
        courserecord->view_courses(courserecord);

        Course course(0,"",0,0,0);
        course.create_course(2);
        cout<<"School name  id  is "<<courserecord->school_id<<"\n";

return 0;
}
