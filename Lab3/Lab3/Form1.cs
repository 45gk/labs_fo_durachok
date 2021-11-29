using System;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double p, v, t, s, a = 0, l;
            List<int> al = new List<int>();
            p = double.Parse(textBox1.Text);
            v = double.Parse(textBox2.Text);
            t = double.Parse(textBox3.Text);

            s = Math.Ceiling(v * t / p);
            textBox4.Text = Convert.ToString(s);
            if (checkBox1.Checked)
            {
                a += 26; al.Add(0);
            }
            if (checkBox2.Checked)
            {
                a += 26; al.Add(1);
            }
            if (checkBox3.Checked)
            {
                a += 33; al.Add(2);
            }
            if (checkBox4.Checked)
            {
                a += 33; al.Add(3);
            }
            if (checkBox5.Checked)
            {
                a += 11; al.Add(4); //!"№;%:?*()&
            }
            if (checkBox6.Checked)
            {
                a += 10; al.Add(5);
            }

            textBox5.Text = Convert.ToString(a);
            textBox6.Text = Convert.ToString(zxc(a, s));
            textBox7.Text = randomPassword(zxc(a, s), al);
        }
        double zxc(double a, double s)
        {
            double x = 0;
            bool flag = false;
            if (a != 0)
            {
                while (flag == false)
                {
                    x++;
                    if (s <= Math.Pow(a, x))
                    {
                        flag = true;
                    }
                }
            }
            else
            {
                MessageBox.Show("Выберите алфавит");
            }
            return x;
        }
        string randomPassword(double l, List<int> al)
        {
            string g = "";
            char[] upperENG = new char[26];
            for (char c = 'A'; c <= 'Z'; ++c)
            {
                upperENG[c - 'A'] = c;
            }
            char[] lowerENG = new char[26];
            for (char c = 'a'; c <= 'z'; ++c)
            {
                lowerENG[c - 'a'] = c;
            }
            char[] upperRUS = new char[33];
            for (char c = 'А'; c <= 'Я'; ++c)
            {
                upperRUS[c - 'А'] = c;
            }
            char[] lowerRUS = new char[33];
            for (char c = 'а'; c <= 'я'; ++c)
            {
                lowerRUS[c - 'а'] = c;
            }
            char[] num = new char[33];
            for (char c = '0'; c <= '9'; ++c)
            {
                num[c - '0'] = c;
            }
            char[] simvol = { '!', '@', '#', '$', '%', ':', '&', '*', '(', ')', '?' };

            Random random = new Random();

            for (int i = 0; i < l; i++)
            {
                int rl = random.Next(al.Count);
                int r = al[rl];
                if (checkBox1.Checked)
                {
                    if (r == 0)
                    {
                        int lp = random.Next(0, 25);
                        g += Convert.ToString(upperENG[lp]);
                    }
                }
                if (checkBox2.Checked)
                {
                    if (r == 1)
                    {
                        int lp = random.Next(0, 25);
                        g += Convert.ToString(lowerENG[lp]);
                    }
                }
                if (checkBox3.Checked)
                {
                    if (r == 2)
                    {
                        int lp = random.Next(0, 32);
                        g += Convert.ToString(upperRUS[lp]);
                    }
                }
                if (checkBox4.Checked)
                {
                    if (r == 3)
                    {
                        int lp = random.Next(0, 32);
                        g += Convert.ToString(lowerRUS[lp]);
                    }
                }
                if (checkBox5.Checked)
                {
                    if (r == 4)
                    {
                        int lp = random.Next(0, 10);
                        g += Convert.ToString(simvol[lp]);
                    }
                }
                if (checkBox6.Checked)
                {
                    if (r == 5)
                    {
                        int lp = random.Next(0, 9);
                        g += Convert.ToString(num[lp]);
                    }
                }


            }

            return g;
        }
    }
}
