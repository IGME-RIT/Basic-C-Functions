Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Functions Tutorial!
Prerequesites: None

A "function" is a chunk of code that tells the computer how to do something.
Putting code into functions, and then using the function, makes code less 
repetitive and more organized. For example, if we want to print "Hello World",
and then "Goodbye", and if we wanted to do this several times, 
then our code would look like this:

int main()
{
	cout << "Hello World" << endl;
	cout << "Goodbye" << endl;
	cout << "Hello World" << endl;
	cout << "Goodbye" << endl;
	cout << "Hello World" << endl;
	cout << "Goodbye" << endl;
	cout << "Hello World" << endl;
	cout << "Goodbye" << endl;
}

And this is repetitive. Instead we can do something like this:

void Function()
{
	cout << "Hello World" << endl;
	cout << "Goodbye" << endl;
}

int main()
{
	Function();
	Function();
	Function();
	Function();
}

Now the code is less repetitive. We can have as many functions as we want,
as long as they each have their own name. Each function can be as long as we want,
there is no limit