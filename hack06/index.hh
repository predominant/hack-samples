<?hh

echo "<h1>Shapes</h1>";
echo "<pre>";
echo htmlentities('type User = shape(
	\'username\' => string,
	\'password\' => string,
	\'admin\' => boolean);

function isAdmin(User $user): void {
	echo "{$user[\'username\']} admin: " . ($user[\'admin\'] ? "Yes" : "No") . "<br/>";
}

isAdmin(shape(\'username\' => \'Graham\', \'password\' => \'secret\', \'admin\' => true));
isAdmin(shape(\'username\' => \'Ando\',   \'password\' => \'3h20g8\', \'admin\' => false));

');
echo "</pre>";
echo "<hr/>";

// ---------------------------

type User = shape(
	'username' => string,
	'password' => string,
	'admin' => boolean);

function isAdmin(User $user): void {
	echo "{$user['username']} admin: " . ($user['admin'] ? "Yes" : "No") . "<br/>";
}

isAdmin(shape('username' => 'Graham', 'password' => 'secret', 'admin' => true));
isAdmin(shape('username' => 'Ando', 'password' => '3h20g8n3g0n', 'admin' => false));
