<?hh
echo "<h1>Generics</h1>";
echo "<pre>";
echo htmlentities('class User<T> {
	protected T $role;

	public function __construct(T $role) {
		$this->role = $role;
	}

	public function getRole(): T {
		return $this->role;
	}

	public function showRole(): string {
		$role = $this->role->name;
		echo "Role is: {$role}<br/>";
	}
}

abstract class Role {
	public string $name;
}

class Guest extends Role {
	public function __construct() {
		$this->name = "Guest";
	}
}

class Admin extends Role {
	public function __construct() {
		$this->name = "Admin";
	}
}

$user = new User<Role>(new Guest());
$user->showRole();

$admin = new User<Role>(new Admin());
$admin->showRole();
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

class User<T> {
	protected T $role;

	public function __construct(T $role) {
		$this->role = $role;
	}

	public function getRole(): T {
		return $this->role;
	}

	public function showRole(): string {
		$role = $this->role->name;
		echo "Role is: {$role}<br/>";
	}
}

abstract class Role {
	public string $name;
}

class Guest extends Role {
	public function __construct() {
		$this->name = "Guest";
	}
}

class Admin extends Role {
	public function __construct() {
		$this->name = "Admin";
	}
}

$user = new User<Role>(new Guest());
$user->showRole();

$admin = new User<Role>(new Admin());
$admin->showRole();