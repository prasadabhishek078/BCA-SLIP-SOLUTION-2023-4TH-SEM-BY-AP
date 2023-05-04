<?php
class callculate
{
    public $a;
    public $b;

    function __construct($a,$b)
    {
        $this->a=$a;
        $this->b=$b;

    }

    public function add()
{
    $c=$this->a+$this->b;
    echo"addition = $c<br> " ;

}
    public function sub()
    {
        $c=$this->a-$this->b;
        echo"substractio = $c <br>";
    
    }

    public function mul()
    {
        $c=$this->a*$this->b;
        echo "multiplication = $c <br>";

    }

    public function div()
    {
        $c=$this->a/$this->b;
        echo"division = $c <br>";

    }

}

$x=$_GET['a'];
$y=$_GET['b'];
$calc=new callculate($x,$y);
$calc->add();
$calc->sub();
$calc->mul();
$calc->div();

?>