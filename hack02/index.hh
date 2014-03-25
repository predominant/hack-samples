<?hh
echo "<h1>Type Annotation</h1>";
echo "<pre>";
echo "class Car {
	private int \$age = 25;
	private string \$units = \"kms\";

	public string \$name = \"Awesome\";

	public function drive(int \$distance): void {
		echo \"The {\$this->name} car drove {\$distance} {\$this->units}\";
	}
}

\$myCar = new Car();
\$myCar->drive(12);
";
echo "</pre>";
echo "<hr/>";

// ---------------------------

class Car {
	private int $age = 25;
	private string $units = "kms";

	public string $name = "Awesome";

	public function drive(int $distance): string {
		echo "The {$this->name} car drove {$distance} {$this->units}";
	}
}

$myCar = new Car();
$myCar->drive(12);
