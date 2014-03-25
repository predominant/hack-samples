<?hh

echo "<h1>Type Aliases</h1>";
echo "<pre>";
echo htmlentities('newtype Vector3 = (int, int, int);

function createVector(int $x, int $y, int $z) {
	return tuple($x, $y, $z);
}

function distance(Vector3 $v1, Vector3 $v2): float {
	return sqrt( pow($v1[0] - $v2[0], 2) + pow($v1[1] - $v2[1], 2) + pow($v1[2] - $v2[2], 2) );
}

echo distance(createVector(1, 1, 1), createVector(-1, -1, -1));
');
echo "</pre>";
echo "<hr/>";

// ---------------------------

newtype Vector3 = (int, int, int);

function createVector(int $x, int $y, int $z) {
	return tuple($x, $y, $z);
}

function distance(Vector3 $v1, Vector3 $v2): float {
	return sqrt( pow($v1[0] - $v2[0], 2) + pow($v1[1] - $v2[1], 2) + pow($v1[2] - $v2[2], 2) );
}

echo distance(createVector(1, 1, 1), createVector(-1, -1, -1));
