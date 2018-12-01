#ifndef ROLE_H_INCLUDED
#define ROLE_H_INCLUDED

class Role {
public:
	enum RoleType {
		STUDENT_ROLE,
		TEACHER_ROLE
	};
	Role(RoleType type);

protected:
	RoleType mType;


};

#endif // ROLE_H_INCLUDED
