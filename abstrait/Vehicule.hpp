#ifndef VEH
#define VEH

class Vehicule
{
	public:
		Vehicule();
		~Vehicule();
		virtual void conduire() = 0;
};

#endif
